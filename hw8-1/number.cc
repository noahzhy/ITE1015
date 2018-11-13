#include <iostream>
#include "number.h"

using namespace std;

int Square::getSquare() {
  int n = this->getNumber();
  n*=n;
  return n;
}

int Cube::getCube () {
  int n = this->getNumber();
  int m = this->getSquare();
  return n*m;
  
}
