#include <iostream>
using namespace std;

void swapInt(int& n1, int& n2){
  int temp = n1;
  n1 = n2;
  n2 = temp;
}

void swapString(string& s1, string& s2){
  string temp = s1;
  s1 = s2;
  s2 = temp;
}

int main() {
  int a,b;
  string s1,s2;
  cin>>a>>b>>s1>>s2;
  cout<<"n1: "<<a<<", n2: "<<b<<", s1: "<<s1<<", s2: "<<s2<<endl;
  swapInt(a,b);
  swapString(s1,s2);
  cout<<"n1: "<<a<<", n2: "<<b<<", s1: "<<s1<<", s2: "<<s2<<endl;

  return 0;
}
