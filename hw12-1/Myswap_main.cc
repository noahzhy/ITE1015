#include <iostream>
using namespace std;

template <typename T>
void myswap(T &a, T &b){
  T tmp = a;
  a = b;
  b = tmp;
}

int main(){
	int a = 3, b = 1;
	myswap(a, b);
  cout << "a= " << a << " b= " << b << endl;

  float c = 3.1f, d = 1.5f;
	myswap(c, d);
	cout << "c= " << c << " d= " << d << endl;

	return 1;
}
