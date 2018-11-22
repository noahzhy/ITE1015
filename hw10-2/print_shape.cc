#include <iostream>
#include "print_shape.h"
using namespace std;

Rectangle::Rectangle(double width,double height){
  this->width = width;
  this->height = height;
}
double Rectangle::getArea(){
  return this->width * this->height;
}
double Rectangle::getPerimeter(){
  return (this->width + this->height)*2;
}
string Rectangle::getTypeString(){
  return "Rectangle";
}


Circle::Circle(double radius){
  this->radius = radius;
}
double Circle::getArea(){
  return this->radius * this->radius * pi;
}
double Circle::getPerimeter(){
  return this->radius * pi * 2;
}
string Circle::getTypeString(){
  return "Circle";
}
