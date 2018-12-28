#ifndef __String__
#define __String__
#include <iostream>
using namespace std;

class MyString {
private:
	int len;
	char* a;
public:
//Constructor, Destructor
	MyString();
	MyString(const char* str);
	~MyString();
	MyString operator+(const MyString& a);
	MyString operator*(const int a);
	MyString& operator=(const MyString& str);
	friend ostream& operator << (ostream& out, MyString& b);
	friend istream& operator >> (istream& in, MyString& b);
};


#endif
