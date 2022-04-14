#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/JointState.h"
#include "geometry_msgs/PoseStamped.h"
#include <math.h>

#define GEAR_RATIO  5
#define WHEEL_RADIUS 0.07
#define VER_DIST_FROM_ODOM_CENTER 0.169 
#define HOR_DIST_FROM_ODOM_CENTER 0.2
#define ENCODER_RESOLUTION 42
//#define MATRIX_TRANSFORMATION [3][4] {{1, 1, 1, 1},{ -1, 1, -1, 1 }, {-1/(VER_DIST_FROM_ODOM_CENTER + HOR_DIST_FROM_ODOM_CENTER), 1/(VER_DIST_FROM_ODOM_CENTER + HOR_DIST_FROM_ODOM_CENTER), 1/(VER_DIST_FROM_ODOM_CENTER + HOR_DIST_FROM_ODOM_CENTER), -1/(VER_DIST_FROM_ODOM_CENTER + HOR_DIST_FROM_ODOM_CENTER)}
#define FRONT_LEFT  0
#define FRONT_RIGHT 1
#define REAR_RIGHT  2
#define REAR_LEFT   3


/*double compute_RPM_from_Ticks(const sensor_msgs::JointState& msg, int wheel_number, ros::Time* previous_time, int* previous_tick)
{

  int current_tick = msg.position[wheel_number];
  ros::Time current_time = msg.header.stamp;
  double Wheel_vel_rad;
  double dt = (current_time - *previous_time).toSec();
  
  Wheel_vel_rad = (current_tick - *previous_tick)*2*M_PI/(dt*ENCODER_RESOLUTION*GEAR_RATIO);

  *previous_time = current_time;
  *previous_tick = current_tick;

  return Wheel_vel_rad;

}*/

/*
double compute_Vel_X_from_W_Wheels (double* fW_array)
{
  double fV_x = 0;;
  int i = 0;

  for (i = 0, i < 4, i++)
  {
    fV_x += fW_array[i]*MATRIX_TRANSFORMATION[0][i];
  }

  return fV_x;
}

double compute_Vel_Y_from_W_Wheels (double* fW_array)
{
  double fV_y = 0;;
  int i = 0;

  for (i = 0, i < 4, i++)
  {
    fV_y += fW_array[i]*MATRIX_TRANSFORMATION[1][i];
  }

  return fV_y;
}

double compute_W_z_from_W_Wheels (double* fW_array)
{
  double fW_z = 0;;
  int i = 0;

  for (i = 0, i < 4, i++)
  {
    fW_z += fW_array[i]*MATRIX_TRANSFORMATION[2][i];
  }

  return fW_z;
}
*/


/*void CLBKRobotPoseCallback(const geometry_msgs::PoseStamped& msg) {
  ROS_INFO("I heard: [%f]\n [%f]\n [%f]\n", msg.pose.position.x, msg.pose.position.y, msg.pose.position.z);
}*/

void CLBKWheel_StatesCallback( const sensor_msgs::JointState& msg, double* previous_time, int* previous_tick ) 
{

  double fW_Front_Left;
  double fW_Front_Right;
  double fW_Rear_Right;
  double fW_Rear_Left;
  

  double fW_array [4];
  //fW_array[FRONT_LEFT] = compute_RPM_from_Ticks (msg, FRONT_LEFT, previous_time, previous_tick);
  //fW_array[FRONT_RIGHT] = compute_RPM_from_Ticks (msg, FRONT_RIGHT,  &msg.position[FRONT_RIGHT], previous_time);
  //fW_array[REAR_RIGHT] = compute_RPM_from_Ticks (msg, REAR_RIGHT,  &msg.position[REAR_RIGHT], previous_time);
  //fW_array[REAR_LEFT] = compute_RPM_from_Ticks (msg, REAR_LEFT,  &msg.position[REAR_LEFT], previous_time);
  
  ROS_INFO("I heard:[%f] \n]", fW_array[FRONT_LEFT]);
  
  double fV_array [3];

 // fV_array[0] = compute_V_x_from_W_Wheels (&fW_array);
  //fV_array[1] = compute_V_y_from_W_Wheels (&fW_array);
 // fV_array[2] = compute_W_z_from_W_Wheels (&fW_array);


  

}

int main(int argc, char **argv) {
  
  ros::init(argc, argv, "sub_bag");
  ros::NodeHandle nh;
  //ros::NodeHandle nh1;

  double previous_time = ros::Time::now().toSec();

  int previous_tick = 0;

  //ros::Subscriber SUBrobotpose = nh.subscribe("/robot/pose", 1000, CLBKRobotPoseCallback);


  ros::Subscriber SUBwheelstates = nh.subscribe<sensor_msgs::JointState>("/wheel_states", 1000, boost::bind(&CLBKWheel_StatesCallback, &previous_time, &previous_tick, _2, _3 ));
  //ros::Publisher PUBwheel_states = nh1.advertise("cmd_vel", 1000);

  ros::spin();

  return 0;
} 