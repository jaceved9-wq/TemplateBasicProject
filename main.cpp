#include <iostream>
#include <iomanip>
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

    cout << "Enter distance from wall: ";
    cin >> distanceFromWall;

    cout << "Enter velocity: ";
    cin >> velocity;

    cout << "Enter angle: ";
    cin >> angleDeg;

    //Angle conversion from degrees to radians
    double theta = angleDeg * (PI / 180.0);

    //Equation variables to keep the equations clean
    double x = distanceFromWall;
    double c = cos(theta); //storing cos(theta)
    double u = velocity;
    double g = gForce;
    double t = tan(theta); //storing tan(theta)
    
    double y = x * t - (g * x * x) / (2.0 * u * u * c * c);

    double r = (u * u * sin(2.0 * theta)) / g;

    //Target distance from catapult
    double targetStart = distanceFromWall + targetLocation;
    double targetEnd = targetStart + targetSpace;

    //Determine if the rock clears the wall
    bool clearsWall = y >= wall;

    //Output
    cout << setprecision(4);
    cout << "Height at wall:" << y << "feet." << endl;

    cout << setprecision(4);
    cout << "Possible Range:" << r << "feet." << endl;

    cout << setprecision(4);
    cout << "Target distance:" << targetStart << "-" << targetEnd << "feet." << endl;

    // The Extra Fun Bit
    if (clearsWall == false)
        cout << "Result: Hit the Wall! Try again!" << endl;

    else if (r > targetEnd)
        cout << "Result: Overshot! Try again!" << endl;

    else if (r < targetStart)
        cout << "Result: Undershot! Try again!" << endl;

    else
        cout << "Result: Direct Hit on Target!" << endl;


}
// Was able to hit the wall with:
// Distance from target = 300
// Velocity = 215
// Angle = 80
