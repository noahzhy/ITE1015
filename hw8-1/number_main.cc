#include <iostream>
#include "number.h"

using namespace std;

int main(int argc, char const *argv[]) {
  string command;
  int n;
  Number nm;
  Square sq;
  Cube cb;
  while (1) {
    cin>>command;
    if (command == "quit") {
      return 0;
    }
    if (command == "number") {
      cin>>n;
      nm.setNumber(n);
      cout<<"getNumber(): "<<nm.getNumber()<<endl;
    }
    if (command == "square") {
      cin>>n;
      sq.setNumber(n);
      cout<<"getNumber(): "<<sq.getNumber()<<endl;
      cout<<"getSquare(): "<<sq.getSquare()<<endl;
    }
    if (command == "cube") {
      cin>>n;
      cb.setNumber(n);
      cout<<"getNumber(): "<<cb.getNumber()<<endl;
      cout<<"getSquare(): "<<cb.getSquare()<<endl;
      cout<<"getCube(): "<<cb.getCube()<<endl;
    }
  }
  return 0;
}
