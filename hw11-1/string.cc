#include <iostream>
#include <string.h>
#include "string.h"

using namespace std;

MyString::MyString() {
	a = NULL;
    len = 0;
}
MyString::MyString(const char* str) {
	a = new char[strlen(str)];
	strcpy(a,str);
	
}

MyString MyString::operator+(const MyString& a) {
	MyString tmp;	
	tmp.a = new char[a.len + this->len];
	strcpy(tmp.a, this->a);
	strcat(tmp.a, a.a);
	return tmp;
}
MyString MyString::operator*(const int a) {
	MyString tmp;
	tmp.a = new char[this->len * a];
	strcpy(tmp.a,this->a);
	for (size_t i = 0; i < a-1; ++i) {
		strcat(tmp.a,this->a);
	}
	return tmp;
}
ostream& operator << (ostream& out, MyString& b) {
	return out << b.a;
}
istream& operator >> (istream& in, MyString& b) {
	char tmpbuf[256];
	in >> tmpbuf;
	delete [] b.a;
	b.a = new char[strlen(tmpbuf)];
	strcpy(b.a, tmpbuf);
	return in;
}

MyString& MyString::operator=(const MyString& str){
	delete [] a;
	a = new char[str.len];
	strcpy(a, str.a);
	return *this;
}

MyString::~MyString(){
	delete a;
}

