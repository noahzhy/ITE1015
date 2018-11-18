#include <iostream>
#include <string>
#include "print_info.h"
using namespace std;

string A::getTypeInfo() {
	return "This is an instance of class A";
}

string B::getTypeInfo() {
	return "This is an instance of class B";
}

string C::getTypeInfo() {
	return "This is an instance of class C";
}
