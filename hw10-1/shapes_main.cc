#include "shapes.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
  Triangle *pt;
  Rectangle *pr;
  vector<Shape*> shapes;
  double w,h;

  cin>>w>>h;
  pt = new Triangle(w,h);
  shapes.push_back(pt);
  cin>>w>>h;
  pr = new Rectangle(w,h);
  shapes.push_back(pr);

  for (size_t i = 0; i < shapes.size(); ++i) {
    cout<<shapes[i]->getArea()<<endl;
  }
  
  delete pt;
  delete pr;
  return 0;
}
