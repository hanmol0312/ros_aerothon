#include <ros/ros.h>
#include <std_msgs/String.h>
#include <sstream>
#include <iostream>
using namespace std;
int main(int argc,char **argv){
    ros::init(argc,argv,"simple_publisher");
    ros::NodeHandle n;
    ros::Publisher pub=n.advertise<std_msgs::String>("chatter",10);
    ros::Rate rate(10);
    int counter=0;
    while(ros::ok())
    {
        std_msgs::String msg;
        std::stringstream ss;
        ss <<"Hello World "<< counter;
        msg.data = ss.str();
        pub.publish(msg);
        ros::spinOnce();
        rate.sleep();
        counter+=1;

    }
    return 0;
}