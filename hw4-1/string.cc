#include <iostream>
using namespace std;
int main() {
  string s1,s2,s3;
  cin>>s1>>s2;
  s3 = s1 + s2;
  cout<< s3<<endl;
  cout<<s3[0]<<endl;
  cout<<s3[s3.length()-1]<<endl;
  return 0;
}
