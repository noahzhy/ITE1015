#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int sumN=0;
  string sumS;

  for (int i = 1; i < argc; i++) {
    if (isdigit(*argv[i])) {
      sumN += atoi(argv[i]);
    }else{
      sumS += argv[i];
    }
  }
  cout<<sumS<<endl;
  cout<<sumN<<endl;

  return 0;
}
