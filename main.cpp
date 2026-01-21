#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // These are the constant values
    const double wall = 75;
    const double targetLocation = 150;
    const double targetSpace = 50;
    const double gForce = 32.17405;
    const double PI = std::numbers::pi;

    //Inputs
    double distanceFromWall;
    double velocity;
    double angleDeg;

    cin >> distanceFromWall;
    cin >> velocity;
    cin >> angleDeg;

    //Angle conversion from degrees to radians
    double theta = angleDeg * (PI / 180.0);

    double x = distanceFromWall;
    double c = cos(theta); //storing cos(theta)
    double u = velocity;
    double g = gForce;
    
    double y = x * tan(theta)
    







}

