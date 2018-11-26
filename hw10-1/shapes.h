#ifndef shape
#define shape
class Shape{
public:
  Shape(double width,double height);
  virtual double getArea() = 0;
protected:
  double width;
  double height;
};

class Rectangle:public Shape{
public:
  Rectangle(double width,double height);
  virtual double getArea();
};

class Triangle:public Shape{
public:
  Triangle(double width,double height);
  virtual double getArea();
};

#endif
