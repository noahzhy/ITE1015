#include <iostream>
#include <vector>
#include "print_shape.h"
using namespace std;

int main() {
  Rectangle *rect;
  Circle *c;
  string command;
  double w,h,r;
  vector<Shape*> shapes;
  while (1) {
  	cin>>command;
    if (command == "0") {
      break;
    }
    if (command == "r") {
      cin>>w>>h;
      rect = new Rectangle(w,h);
      shapes.push_back(rect);
    }
    if (command == "c") {
      cin>>r;
      c = new Circle(r);
      shapes.push_back(c);
    }
  }
  for (size_t i = 0; i < shapes.size(); ++i) {
    cout<<shapes[i]->getTypeString()<<", "<<shapes[i]->getArea()<<", "<<shapes[i]->getPerimeter()<<endl;

  }
  delete rect;
  delete c;
  return 0;
}
