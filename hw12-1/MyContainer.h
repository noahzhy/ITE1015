#ifndef __MyContainer__
#define __MyContainer__
#include <iostream>
using namespace std;

template <typename T>
class MyContainer {
public:
  MyContainer() {
    obj_arr = NULL;
    n_elements = 0;
  }

  MyContainer(int n) {
    obj_arr = new T[n];
    n_elements = n;
  }

  MyContainer(T* arr, int n) {
    obj_arr = arr;
    n_elements = n;
  }

  ~MyContainer() {
    delete[] obj_arr;
  }

  void clear() {
    delete[] obj_arr;
    obj_arr = NULL;
    n_elements = 0;
  }

  int size() {
    return n_elements;
  }

protected:
  T* obj_arr = NULL;
  int n_elements;
};

#endif
