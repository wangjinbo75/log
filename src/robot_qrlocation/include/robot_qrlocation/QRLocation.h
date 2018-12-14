#ifndef QRLOCATION_H
#define QRLOCATION_H
/*
 *二维码的内容必须符合固定格式：
 * QRLocation,<qrSize>
 * 其中<qrSize>是一个实数，表示二维码的边长
 */
//#include <opencv/cv.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv/highgui.h>
#include <cv_bridge/cv_bridge.h>
#include <zbar.h>
#include <string>


//二维码倾斜阈值
#define QRLOCATION_INCLINATION_THRESHOLD  0.1
//调试窗口标题
#define QRLOCATION_DEBUGUI_TITLE "debugui"

//二维码位姿
typedef struct QRPose
{
        //二维码中心所在铅垂线与O点构成的平面和Z轴形成的夹角
        double a;
        //二维码所在平面与X轴构成的夹角
        double b;
        //二维码中心到XOY平面的距离
        double z;
}
QRPose_t;
//二维码定位算法
class QRLocation
{

public:
    //初始化，第一个参数为摄像头编号，第二个参数为摄像头上下视角，第三个参数为是否开启调试窗口
    void init(double hViewAngle,bool debugUI);
    //获取二维码位姿
    bool getQRPose(cv_bridge::CvImagePtr cv_ptr , QRPose_t* qrPose);
    //销毁
    bool destroy();
    //灰度图
    cv::Mat frame , grayFrame;
private:
    //图像话题
    std::string image_topic;
    //摄像头上下视角
    double hViewAngle;
    //是否开启调试窗口
    bool debugUI;
    //是否初始化
    bool haveInited;
    //图片扫描器
    zbar::ImageScanner scanner;

private:
    //计算位姿（格式合法性判断）
    bool getQRPose(zbar::Image::SymbolIterator symbol,QRPose_t* qrPose);
    //计算位姿（算法）
    bool getQRPose(zbar::Image::SymbolIterator symbol,double qrSize,QRPose_t* qrPose);
};
#endif
