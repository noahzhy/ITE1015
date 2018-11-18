#include <iostream>
#include <string>
#include <vector>
#include "print_member.h"
using namespace std;

int main() {
	int a;
	double b;
	string c;
	
	cin>>a>>b>>c;
	
	vector<A*> objects;
	
	A *pa = new A(a);
	B *pb = new B(b);
	C *pc = new C(c);
	
	objects.push_back(pa);
	objects.push_back(pb);
	objects.push_back(pc);
	
	vector<A*>::iterator it;
	it = objects.begin();
	

	while (it!=objects.end()) {
		(*it)->print();
		it++;
	}
	
	
	delete pa;
	delete pb;
	delete pc;



	return 0;
}
