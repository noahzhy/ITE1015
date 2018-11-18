#ifndef __print_member__
#define __print_member__
#include <iostream>
#include <string>
using namespace std;

class A {
public:
	A();
	A(int a);
	virtual ~A();
	virtual void print();
private:
	int *memberA;
};

class B: public A {
public:
	B();
	B(double b);
	virtual ~B();
	virtual void print();
private:
	double *memberB;
};

class C: public B {
public:
	C();
	C(string c);
	virtual ~C();
	virtual void print();
private:
	string *memberC;
};

#endif
