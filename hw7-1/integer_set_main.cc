#include <iostream>
#include <string>
#include <vector>
#include "integer_set.h"

using namespace std;

int main(void) {
	IntegerSet is;
	string command;
	int n;

	while (1) {
		cin>>command;
		if (command == "add") {
			cin>>n;
			is.AddNumber(n);
			vector<int> v0 = is.GetAll();
			vector<int>::iterator it = v0.begin();
			while (it != v0.end()) {
				cout << *it << " ";
				it++;
			}
			cout<<endl;

		} else if(command == "del") {
			cin>>n;
			is.DeleteNumber(n);
			vector<int> v0 = is.GetAll();
			vector<int>::iterator it = v0.begin();
			while (it != v0.end()) {
				cout << *it << " ";
				it++;
			}
			cout<<endl;

		} else if(command == "get") {
			cin>>n;
			cout<<is.GetItem(n)<<endl;

		} else if(command == "quit") {
			return 0;
		}
	}


	return 0;
}
