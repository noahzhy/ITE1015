#include <iostream>
using namespace std;
int main() {
  int n;
  int max = 0,min = 0;
  cin>>n;
  int *pa = new int[n];
  for (int i = 0; i < n; i++) {
    cin>>pa[i];
  }
  for (int j = 0; j < n; j++) {
    if(max<pa[j]){
      max = pa[j];
    }
    if(min>pa[j]){
      min=pa[j];
    }
  }
  cout<<"min: "<<min<<endl;
  cout<<"max: "<<max<<endl;
  delete [] pa;
  return 0;
}
