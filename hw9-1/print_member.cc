#include <iostream>
#include <string>
#include "print_member.h"
using namespace std;

A::A() {

}
A::A(int a) {
	this->memberA = new int;
	*this->memberA=a;
	cout << "new memberA" << endl;

}
A::~A() {
delete this->memberA;
cout << "delete memberA" << endl;
}
void A::print() {
	cout << "*memberA " <<*this->memberA<<endl;
}

B::B() {

}
B::B(double b):A(1) {
	this->memberB = new double;
	*this->memberB = b;
	cout << "new memberB" << endl;
}
B::~B() {
delete this->memberB;
cout << "delete memberB" << endl;
}
void B::print() {
	A::print();
	cout << "*memberB " <<*this->memberB<<endl;
	
}

C::C() {

}
C::C(string c):B(1.1) {
	this->memberC = new string;
	*this->memberC = c;
	cout << "new memberC" << endl;
}
C::~C() {
delete this->memberC;
cout << "delete memberC" << endl;
}
void C::print() {
	B::print();
	cout << "*memberC " <<*this->memberC<<endl;
}


