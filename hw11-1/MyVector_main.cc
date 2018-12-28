#include <iostream>
#include <string>
#include <cstdlib>
#include "MyVector.h"
using namespace std;

int main() {
	string command;
	int count;
	MyVector *a;
	MyVector *b;

	while (1) {
		cin>>command;
		if (command == "quit") {
			break;
		}
		if (command == "new") {
			cin>>count;
			cout<<"enter a"<<endl;
			a = new MyVector(count);
			cin>>*a;
			cout<<"enter b"<<endl;
			b = new MyVector(count);
			cin>>*b;
		}
		if(command == "a") {
			char op;
			cin>>op;
			string right;
			if(op =='+') {
				cin>>right;
				if(right == "b") {
					*a = *a + *b;
				} else {
					int q = atof(right.c_str());
					*a = *a + q;
				}
				cout<<*a<<endl;
			}
			if(op == '-') {
				cin>>right;
				if(right == "b") {
					*a = *a - *b;
				} else {
					int q = atof(right.c_str());
					*a = *a - q;
				}
				cout<<*a<<endl;
			}

		}
		if(command == "b") {
			char op;
			cin>>op;
			string right;
			if(op =='+') {
				cin>>right;
				if(right == "a") {
					*b = *b + *a;
				} else {
					int q = atof(right.c_str());
					*b = *b + q;
				}
				cout<<*b<<endl;

			}
			if(op == '-') {
				cin>>right;
				if(right == "a") {
					*b = *b - *a;
				} else {
					int q = atof(right.c_str());
					*b = *b - q;
				}
				cout<<*b<<endl;
			}
		}
	}
	delete a;
	delete b;
	return 0;
}

