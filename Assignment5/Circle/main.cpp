#include <iostream>
#include "Circle.cpp"
int main(){
    Circle circle;
    circle.setRadius(4);
    cout << circle.getRadius() << endl;
    cout << circle.getArea() << endl;
    cout << circle.getDiameter() << endl;
    cout << circle.getCircumference() << endl;

}