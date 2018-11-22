#include <iostream>
#include <vector>
#include "dynamic_cast.h"
using namespace std;

int main() {
  vector<B*> objects;
  B *pb;
  C *pc;
  D *pd;
  string command;
  while (1) {
    cin>>command;
    if (command == "0") {
      break;
    }
    if (command == "B") {
      pb = new B;
      objects.push_back(pb);
    }
    if (command == "C") {
      pc = new C;
      objects.push_back(pc);
    }
    if (command == "D") {
      pd = new D;
      objects.push_back(pd);
    }
  }

  for (size_t i = 0; i < objects.size(); ++i) {
  	C *pc2 = dynamic_cast<C*>(objects[i]);
    D *pd2 = dynamic_cast<D*>(objects[i]);
    if(pc2)pc2->test_C();
    if(pd2)pd2->test_D();
  }
  delete pb;
  delete pc;
  delete pd;
  return 0;
}
