#include "classes.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<A*> objects;
  A *pa = new A;
  B *pb = new B;
  C *pc = new C;
  objects.push_back(pa);
  objects.push_back(pb);
  objects.push_back(pc);
  vector<A*>::iterator it;
  it = objects.begin();
  while (it!=objects.end()) {
    (*it)->test();
    it++;
  }
  delete pa;
  delete pb;
  delete pc;
  return 0;
}
