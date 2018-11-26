#include <iostream>
#include <vector>
#include "print_shape.h"
using namespace std;

int main() {
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
      shapes.push_back(new Rectangle(w,h));
    }
    if (command == "c") {
      cin>>r;
      shapes.push_back(new Circle(r));
    }
  }
  for (size_t i = 0; i < shapes.size(); ++i) {
    cout<<shapes[i]->getTypeString()<<", "<<shapes[i]->getArea()<<", "<<shapes[i]->getPerimeter()<<endl;
    delete shapes[i];
  }

  return 0;
}
