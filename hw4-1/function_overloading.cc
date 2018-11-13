#include <iostream>
using namespace std;

int add(int a, int b){
  return a+b;
}

std::string add(string a, string b){
  return a + "-" + b;
}

int main() {
  int a,b;
  string s1,s2;
  cin>>a>>b>>s1>>s2;
  cout<<add(a,b)<<endl;
  cout<<add(s1,s2)<<endl;
  return 0;
}
