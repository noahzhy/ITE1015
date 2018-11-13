#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int width, int height){
  this->width_ = width;
  this->height_ = height;
}

int Rectangle::getArea(){
  return width_ * height_;
}

int Rectangle::getPerimeter(){
  return (width_ + height_) * 2;
}

Square::Square (int width):Rectangle(width, width){
	
}

void Square::print(){
  cout<<this->width_<<"x"<<this->width_<<" Square"<<endl;
  cout<<"Area: "<<this->getArea()<<endl;
  cout<<"Perimeter: "<<this->getPerimeter()<<endl;
}

NonSquare::NonSquare (int width, int height):Rectangle(width, height){
	
}

void NonSquare::print(){
  cout<<this->width_<<"x"<<this->height_<<" NonSquare"<<endl;
  cout<<"Area: "<<this->getArea()<<endl;
  cout<<"Perimeter: "<<this->getPerimeter()<<endl;
}
