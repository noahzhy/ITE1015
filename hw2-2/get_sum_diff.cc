#include <iostream>
using namespace std;
void getSumDiff(int a, int b, int* pSum, int* pDiff){
  *pSum = a+b;
  *pDiff = a-b;
}
int main() {
	int a,b,s,d;
	cin>>a;
	cin>>b;
	getSumDiff(a,b,&s,&d);
	cout<<"Sum:"<<s<<endl;
	cout<<"diff:"<<d<<endl;
	return 0;
}
