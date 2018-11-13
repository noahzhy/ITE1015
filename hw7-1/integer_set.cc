#include <iostream>
#include <algorithm>
#include <vector>
#include "integer_set.h"

using namespace std;

IntegerSet::IntegerSet() {};
IntegerSet::~IntegerSet() {
	this->numbers_.clear();
};

void IntegerSet::AddNumber(int num) {
	bool q = true;
	vector<int> v0 = GetAll();
	vector<int>::iterator it = v0.begin();
	while (it != v0.end()) {
		if (*it == num) {
			q = false;
		}
		it ++;
	}
	if (q) {
		numbers_.push_back(num);
	}
	sort(numbers_.begin(), numbers_.end());
};

void IntegerSet::DeleteNumber(int num) {
	vector<int>::iterator it = numbers_.begin();
	while (it != numbers_.end()) {
		if (*it == num) {
			numbers_.erase(it);
			break;
		}
		it ++;
	}
	sort(numbers_.begin(), numbers_.end());
};

int IntegerSet::GetItem(int pos) const {
	vector<int> v0 = GetAll();
	int t = -1;
	vector<int>::iterator it = v0.begin();
	while (it != v0.end()) {
		if (*it == pos) {
			return ++t;
		}
		it ++;
		t++;
	}
	return t;
};

vector<int> IntegerSet::GetAll() const {
	return this->numbers_;
};
