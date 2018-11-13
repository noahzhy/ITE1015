#include <iostream>
#include "magic_square.h"
using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  int **array;
  n = atoi(argv[1]);
  if (n % 2 != 1 && n < 3) {
    return 0;
  }
  array = new int *[n];
  for (int i = 0; i < n; i++) {
    array[i] = new int [n];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      array[i][j] = 0;
    }
  }

  magic_square(array,n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout<<array[i][j]<<" ";
    }
    cout<<endl;
  }
  for(int i = 0; i < n; i ++) {
    delete [] array[i];
  }
  delete [] array;
  return 0;
}
