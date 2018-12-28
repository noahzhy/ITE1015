#ifndef __MyVector__
#define __MyVector__
#include <iostream>
using namespace std;

class MyVector {
	private:
		int max_num;
		double* a;
	public:
		MyVector(int m);
		~MyVector();
		MyVector operator+(const MyVector & a);
		MyVector operator-(const MyVector & a);
		MyVector operator+(const int a);
		MyVector operator-(const int a);
		friend ostream& operator << (ostream& out, MyVector b);
		friend istream& operator >> (istream& in, MyVector b);
};

#endif
