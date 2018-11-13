#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n = *argv[2]-'0';
  string str = argv[1];

  for (size_t i = 0; i < n; i++) {
    cout<<str<<endl;
  }

  return 0;
}
