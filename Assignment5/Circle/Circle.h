#include <iostream>
using namespace std;
class Circle
{
private:
    /* data */
    double radius;
    double pi = 3.14159;
public:
    Circle();
    Circle(double radius);
    void setRadius(double raidus);
    double getRadius();
    double getArea();
    double getDiameter();
    double getCircumference();
};
