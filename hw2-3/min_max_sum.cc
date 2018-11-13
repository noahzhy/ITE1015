#include <iostream>
using namespace std;

int main() {
  int array[5];
  int i=0,j=0;
  for (; i < 5; i++) {
    cin>>array[i];
  }

  int max = array[0];
  int min = array[0];
  int sum = 0;

  for (; j < 5; j++) {
    if (max < array[j]) {
      max = array[j];
    }
    if (min > array[j]) {
      min = array[j];
    }
    sum += array[j];
  }
  cout<<"min: "<<min<<endl<<"max: "<<max<<endl<<"sum: "<<sum<<endl;
  return 0;
}
