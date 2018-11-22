#ifndef __print_shape__
#define __print_shape__
#include <iostream>
using namespace std;
#define pi 3.141592

class Shape{
public:
  virtual double getArea() = 0;
  virtual double getPerimeter() = 0;
  virtual string getTypeString() = 0;
protected:
  double area;
  double perimeter;
  string type;
};

class Rectangle : public Shape{
public:
  Rectangle(double width,double height);
  virtual double getArea();
  virtual double getPerimeter();
  virtual string getTypeString();
protected:
  double width;
  double height;
};

class Circle : public Shape{
public:
  Circle(double radius);
  virtual double getArea();
  virtual double getPerimeter();
  virtual string getTypeString();
protected:
  double radius;
};

#endif
