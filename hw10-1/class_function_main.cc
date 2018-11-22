#include "class_function.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
  string command;
  vector<A*> objects;
  B *pb;
  C *pc;
  BB *pbb;
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
    if (command == "BB") {
      pbb = new BB;
      objects.push_back(pbb);
    }
  }

  vector<A*>::iterator it;
  it = objects.begin();
  while (it != objects.end()) {
    (*it)->test1();
    (*it)->test2();
    it++;
  }
  delete pb;
  delete pc;
  delete pbb;
  return 0;
}
