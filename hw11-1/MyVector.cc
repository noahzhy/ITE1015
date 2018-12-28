#include <iostream>
#include "MyVector.h"
using namespace std;

MyVector::MyVector(int m) {
	this->max_num = m;
	this->a = new double[m];
}

MyVector::~MyVector() {
//	delete [] a;
}

MyVector MyVector::operator+(const MyVector & a) {
	for (size_t i = 0; i < a.max_num; ++i) {
		this->a[i] += a.a[i];
	}
	return *this;
}

MyVector MyVector::operator-(const MyVector & a) {
	for (size_t i = 0; i < a.max_num; ++i) {
		this->a[i] -= a.a[i];
	}
	return *this;
}
MyVector MyVector::operator+(const int a) {
	for (size_t i = 0; i < this->max_num; ++i) {
		this->a[i] += a;
	}
	return *this;
}
MyVector MyVector::operator-(const int a) {
	for (size_t i = 0; i < this->max_num; ++i) {
		this->a[i] -= a;
	}
	return *this;
}
ostream& operator << (ostream& out, MyVector b) {
	for (size_t i = 0; i < b.max_num; ++i) {
		out << b.a[i] << " ";
	}
	return out;
}
istream& operator >> (istream& in, MyVector b) {
	for (size_t i = 0; i < b.max_num; ++i) {
		in >> b.a[i];
	}
	return in;
}

