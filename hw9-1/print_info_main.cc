#include "print_info.h"
#include <iostream>
#include <vector>
using namespace std;

void printObjectTypeInfo1(A* object) {
	cout << object->getTypeInfo() << endl;

}
void printObjectTypeInfo2(A& object) {
	cout << object.getTypeInfo() << endl;
}

int main() {
	vector<A*> objects;
	A *pa = new A;
	B *pb = new B;
	C *pc = new C;
	objects.push_back(pa);
	objects.push_back(pb);
	objects.push_back(pc);
	vector<A*>::iterator it;
	it = objects.begin();
	
	while (it != objects.end()) {
		printObjectTypeInfo1(*it);
		printObjectTypeInfo2(**it);
		it++;
	}
	delete pa;
	delete pb;
	delete pc;
	return 0;
}
