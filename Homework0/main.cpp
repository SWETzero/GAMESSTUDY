#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

constexpr double MY_PI = 3.1415926;

int main(){

    Eigen::Vector3f v(2.0f,1.0f,1.0f);
    Eigen::Matrix3f tranformation;
    float rad = 45.0f / 180.0 * MY_PI;
    tranformation << std::cos(rad),-std::sin(rad),1.0,//齐次坐标一次计算
                     std::sin(rad),std::cos(rad),2.0,
                    0.0,0.0,1.0;
    std::cout << tranformation * v << std::endl;    //计算顺序是从右向左
    
    return 0;
}