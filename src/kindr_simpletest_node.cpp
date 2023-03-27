#include "kindr/Core"

int main(){
    std::cout << "Hello kindr world!" << std::endl;
    
    kindr::AngleAxisD angleAxis1; // identity rotation: angle = 0.0 axis = (1.0, 0.0, 0.0)
    std::cout << angleAxis1 << std::endl;

    double angle = 0.2;
    double n_1 = sqrt(0.3);
    double n_2 = sqrt(0.5);
    double n_3 = sqrt(0.2);
    Eigen::Vector3d axis(n_1, n_2, n_3);
    kindr::AngleAxisD angleAxis2(angle, axis);
    std::cout << angleAxis2 << std::endl;
    return 0;
}