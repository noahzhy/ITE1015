#include <iostream>
using namespace std;

int main() {
  int array[3][2];
  int sum1=0,sum2=0;
  for (size_t i = 0; i < 3; i++) {
    cin>>array[i][0]>>array[i][1];
  }

  for (size_t j = 0; j < 3; j++) {
    cout<<array[j][0]<<" "<<array[j][1]<<endl;
    sum1 += array[j][0];
    sum2 += array[j][1];
  }

  cout<<"Sum of the numbers in the first column: "<<sum1<<endl;
  cout<<"Sum of the numbers in the second column: "<<sum2<<endl;


  return 0;
}
