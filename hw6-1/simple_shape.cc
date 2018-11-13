#include <iostream>
#define pi 3.14
#include "simple_shape.h"
using namespace std;

// circle_shape::circle_shape() {}
double circle_shape::get_area(){
	return r * r * pi;
}

double circle_shape::get_perimeter(){
  return r * 2 * pi;
}

double rectangle_shape::get_area(){
	return (x1-x)*(y-y1);
}

double rectangle_shape::get_perimeter(){
	return (x1-x)*2+(y-y1)*2;
}
