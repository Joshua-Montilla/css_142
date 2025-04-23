#include <iostream>
#include <cmath>

const double pi = 3.14159265358979323846;

double degreeToRadian(double degrees){
    return degrees * (pi/180.0);
}

int main(){
double x,y,z;
double thrust, angle, warp;
std::cout << "Need X, Y, Z coordinates:  ";
std::cin >> x >> y >> z;
std::cout << "Need thrust power, the angle (degrees), and warp: ";
std::cin >> thrust >> angle >> warp;

double angle2 = degreeToRadian(angle);

double new_x = (x + thrust * cos(angle2)) * warp;
double new_y = (y + thrust * sin(angle2)) * warp;
double new_z = z + (thrust / warp);

std::printf ("You've reached your new coordinates.\nX: %.1f\nY: %.1f\nZ: %.1f", new_x,new_y,new_z) ;

return 0;
}
