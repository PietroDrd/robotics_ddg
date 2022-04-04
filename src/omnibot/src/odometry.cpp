#include <math.h>

//#include "ros/ros.h"
// to add others #include ""

struct position{
    double x_b;
    double y_b;
    double theta_b;
    //others?
};

struct rosThings{
    ros::NodeHandle node;
    ros::Publisher odometry;
    ros::Publisher custom_odometry;
    ros::Subscriber twist_subscriber;
    ros::ServiceServer reset_odom;
    ros::ServiceServer reset_odom_to_pose;
    //COPIATI DA GIULIO!!

    // dynamic reconfigure, msg, eulerkutta?!?
};



int main (int argc, char **argv){

    ros::init(argc, argv, "odometry");
    
} 