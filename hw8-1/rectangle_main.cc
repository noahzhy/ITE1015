#include <iostream>
#include "rectangle.h"

using namespace std;

int main(int argc, char const *argv[]) {
  string command;
  int w,h;
  while (1) {
    cin>>command;
    if (command == "quit") {
      return 0;
    }
    if (command == "nonsquare") {
      cin>>w>>h;
      NonSquare nsq(w,h);
      nsq.print();
    }
    if (command == "square") {
      cin>>w;
      Square sq(w);
      sq.print();
    }
  }
  return 0;
}
