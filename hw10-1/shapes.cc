#include "shapes.h"
#include <iostream>
using namespace std;

Shape::Shape(double width,double height){
  this->width = width;
  this->height = height;
}

Rectangle::Rectangle(double width,double height):Shape(width,height){

}

double Rectangle::getArea(){
  return this->width * this->height;
}

Triangle::Triangle(double width,double height):Shape(width,height){

}

double Triangle::getArea(){
  return (this->width * this->height)/2;
}
