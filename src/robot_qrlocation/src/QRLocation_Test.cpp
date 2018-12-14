#include <ros/ros.h>
#include <std_msgs/String.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Float32MultiArray.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/image_encodings.h>
#include <cv_bridge/cv_bridge.h>
#include <robot_qrlocation/QRLocation.h>
#include <sstream>
#include <stdio.h>
#include <image_transport/image_transport.h>

using namespace std;

QRPose_t _pose;
int _distance;
int _bias;
int _angle;

void zbarscan(cv_bridge::CvImagePtr cv_ptr, ros::Publisher pub)
{
    QRLocation qrLoc;

    //0,74 is the rad of up and down viwer of camera , false means do not open camera window
    qrLoc.init(0.74, true);

    bool isQR = qrLoc.getQRPose(cv_ptr, &_pose);
    // cout<<flag<<endl;

    int temp = isQR ? 1 : 0;
    _distance = _pose.z * 10.0;                //摄像头中心到二维码中心的垂直距离（mm）
    _bias = -_distance * tan(_pose.a);         //二维码偏移摄像头中心的左右偏移距离（mm）左正右负
    _angle = _pose.a * 180 / 3.1415926 * 1000; //摄像头逆时针转为正（豪度）
    //ROS_INFO("temp = %d, distace = %d, bias = %d, angle1 = %d\n",
              //temp, _distance, _bias, _angle);
    std_msgs::Float32MultiArray msg_array;
    msg_array.data.push_back(temp);
    msg_array.data.push_back(_distance);
    msg_array.data.push_back(_bias);
    msg_array.data.push_back(_angle);
    pub.publish(msg_array);
}

class ImageConverter
{
    ros::NodeHandle nh;
    image_transport::ImageTransport it;
    image_transport::Subscriber sub_image;

    //二维码中心所在铅垂线与O点构成的平面和Z轴形成的夹角
    //    ros::Publisher a_pub = nh.advertise<std_msgs::Float32>("qrcode_theta",1000);
    //二维码所在平面与X轴构成的夹角
    //    ros::Publisher b_pub = nh.advertise<std_msgs::Float32>("qrcode_b",1000);
    //二维码中心到XOY平面的距离
    //    ros::Publisher z_pub = nh.advertise<std_msgs::Float32>("qrcode_distance",1000);

    ros::Publisher pose_pub = nh.advertise<std_msgs::Float32MultiArray>("qrlocate_pose", 1000);

  public:
    ImageConverter() : it(nh)
    {
        sub_image = it.subscribe("/camera/image_raw", 1, &ImageConverter::imageCb, this);
    }
    ~ImageConverter() {}

    void imageCb(const sensor_msgs::ImageConstPtr &msg)
    {

        cv_bridge::CvImagePtr cv_ptr;
        try
        {
            cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
        }
        catch (cv_bridge::Exception &e)
        {
            ROS_ERROR("cv_bridge exception: %s", e.what());
            return;
        }
        zbarscan(cv_ptr, pose_pub);
    }
};

int main(int argc, char **argv)
{
    ros::init(argc, argv, "qrlocation_node");
    //QRLocation qrLoc;
    // qrLoc.init(0.60,true);

    ImageConverter ic;

    //订Image topic话题消息
    // ros::Subscriber sub_image = nh.subscribe("/camera/image_raw", 1 ,imageCallback);
    ros::Rate loop_rate(10);
    while (ros::ok())
    {
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}
