#include <ros/ros.h>
#include "whycon_ros.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "whycon");
  ros::NodeHandle n("~");
  ROS_INFO("done");
  whycon::WhyConROS whycon_ros(n);
  ros::spin();
}
