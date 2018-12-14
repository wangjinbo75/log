#include "robot_qrlocation/QRLocation.h"
#include <stdio.h>
#include <sensor_msgs/Image.h>
#include <ros/ros.h>
#include <cv_bridge/cv_bridge.h>

using namespace std;
using namespace cv;
using namespace zbar;

void QRLocation::init(double hViewAngle, bool debugUI)
{
    this->hViewAngle = hViewAngle;
    this->debugUI = debugUI;
    this->haveInited = true;
    //grayFrame=[];
    //配置zbar图片扫描器
    scanner.set_config(zbar::ZBAR_NONE, zbar::ZBAR_CFG_ENABLE, 1);
    //如果开启调试，则创建窗口，名称为“debugui”，自动调整大小
    if (debugUI)
        namedWindow(QRLOCATION_DEBUGUI_TITLE, CV_WINDOW_AUTOSIZE);
}

bool QRLocation::getQRPose(cv_bridge::CvImagePtr cv_ptr, QRPose_t *qrPose)
{
    frame = cv_ptr->image;
    //图像为空
    //if(frame.empty())
    //printf("The frame is Empty !");
    //return false;
    //ROS_INFO("Frame is not empty");
    //原图转灰度图
    cvtColor(frame, grayFrame, CV_BGR2GRAY);
    //如果开启调试，则显示灰度图
    if (debugUI)
    {
        //namedWindow(QRLOCATION_DEBUGUI_TITLE);
        imshow(QRLOCATION_DEBUGUI_TITLE, grayFrame);
        waitKey(50);
    }
    int width = grayFrame.cols;
    int height = grayFrame.rows;
    uchar *raw = (uchar *)(grayFrame.data);
    //创建zbar图像
    Image image(width, height, "Y800", raw, width * height);
    //扫描图像，识别二维码，获取个数
    int symbolCount = scanner.scan(image);
    //获取第一个二维码
    Image::SymbolIterator symbol = image.symbol_begin();
    //遍历所有识别出来的二维码
    while (symbolCount--)
    {
        //能够识别
        if (getQRPose(symbol, qrPose))
            return true;
        //下一个二维码
        ++symbol;
    }
    return false;
}

bool QRLocation::getQRPose(Image::SymbolIterator symbol, QRPose_t *qrPose)
{
    //首先得是一个二维码
    if (symbol->get_type_name() != "QR-Code")
        return false;
    //获取内容
    char data[128];
    strncpy(data, symbol->get_data().c_str(), sizeof(data) - 1);
    data[sizeof(data) - 1] = 0;
    //内容得是以“QRRecharge,”开头
    if (strncmp(data, "QRRecharge,", 11) != 0)
        return false;
    //获取二维码边长
    double qrSize = 7.0;
    //sscanf(data + 11, "%lf", &qrSize);
    if (qrSize == 0)
        return false;
    //计算位姿
    return getQRPose(symbol, qrSize, qrPose);
}

bool QRLocation::getQRPose(Image::SymbolIterator symbol, double qrSize, QRPose_t *qrPose)
{
    //获得四个点的坐标
    double x0 = symbol->get_location_x(0);
    double y0 = symbol->get_location_y(0);
    double x1 = symbol->get_location_x(1);
    double y1 = symbol->get_location_y(1);
    double x2 = symbol->get_location_x(2);
    double y2 = symbol->get_location_y(2);
    double x3 = symbol->get_location_x(3);
    double y3 = symbol->get_location_y(3);
    //左边沿纵向差
    double leftH = y1 - y0;
    //右边沿纵向差
    double rightH = y2 - y3;

    cout << leftH << " " << rightH << endl;
    //必须保证0点高于1点，3点高于2点
    if (leftH < 0 || rightH < 0)
        // cout<<"必须保证0点高于1点，3点高于2点"<<endl;
        return false;
    //左边沿横向差
    double leftW = abs(x0 - x1);
    //右边沿横向差
    double rightW = abs(x2 - x3);
    //不能太倾斜
    if (max(leftW / leftH, rightW / rightH) > QRLOCATION_INCLINATION_THRESHOLD)
        return false;
    //上下视角一半的正切值，因为一直要用，所以先计算出来
    double tanHalfView = tan(hViewAngle / 2);
    double leftLen = sqrt(leftH * leftH + leftW * leftW);
    double rightLen = sqrt(rightH * rightH + rightW * rightW);
    //左边沿的深度
    int height = grayFrame.rows;
    int width = grayFrame.cols;
    double leftZ = height * qrSize / tanHalfView / 2 / leftLen;
    //右边沿的深度
    double rightZ = height * qrSize / tanHalfView / 2 / rightLen;
    //得到中心点的深度
    double z = (leftZ + rightZ) / 2;
    //计算b的正弦值
    double sinB = (leftZ - rightZ) / qrSize;//数值计算
    //ROS_INFO("sinB = %f, leftZ = %f, rightZ = %f, qrSize = %f\n", sinB, leftZ, rightZ, qrSize);
    if (sinB > 1)
        return false;
    //得到b
    double b = asin(sinB);
    //两条对角线的系数和偏移
    double k1 = (y2 - y0) / (x2 - x0);
    double b1 = (x2 * y0 - x0 * y2) / (x2 - x0);
    double k2 = (y3 - y1) / (x3 - x1);
    double b2 = (x3 * y1 - x1 * y3) / (x3 - x1);
    //两条对角线交点的X坐标
    double crossX = -(b1 - b2) / (k1 - k2);
    //计算a的正切值
    double tanA = tanHalfView * (2 * crossX - width) / height;
    //得到a
    double a = atan(tanA);
    qrPose->a = a;
    qrPose->b = b;
    qrPose->z = z;
    return true;
}

bool QRLocation::destroy()
{
    //释放灰度图
    //cvReleaseImage(&grayFrame);
    //销毁窗口
    cvDestroyWindow(QRLOCATION_DEBUGUI_TITLE);
}
