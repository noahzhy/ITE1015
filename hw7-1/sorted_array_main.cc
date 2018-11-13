#include "sorted_array.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	SortedArray sa;
	string command;
	stringstream ss;
	int number;
	while (1) {
		getline(cin,command);
		if (command == "quit") {
			break;
		} else if (command == "ascend") {
			vector<int> v1 = sa.GetSortedAscending();
			vector<int>::iterator it = v1.begin();
			while (it != v1.end()) {
				cout << *it << " ";
				it++;
			}
			cout << endl;
		} else if (command == "descend") {
			vector<int> v2 = sa.GetSortedDescending();
			vector<int>::iterator it = v2.begin();
			while (it != v2.end()) {
				cout << *it << " ";
				it++;
			}
			cout << endl;
		} else if (command == "max") {
			cout << sa.GetMax() << endl;
		} else if (command == "min") {
			cout << sa.GetMin() << endl;
		}

		else {
			ss.clear();
			ss.str(command);
			while (ss>>number) {
				sa.AddNumber(number);
			}
		}
	}
	return 0;
}
