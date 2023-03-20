#include "Circle.h" 
Circle :: Circle(){}
Circle :: Circle(double radius){
    this->radius = radius;
}
void Circle::setRadius(double radius){
    this->radius = radius;
}
double Circle::getRadius(){
    return this->radius;
}
double Circle::getArea(){
    return this->pi * this->radius * this->radius; 
}
double Circle::getDiameter(){
    return this->radius * 2;
}
double Circle::getCircumference(){
    return 2 * this->pi * this->radius;
}