#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "message_book.h"
using namespace std;

MessageBook::MessageBook() {}
MessageBook::~MessageBook() {
	messages_.clear();
}

void MessageBook::AddMessage(int number, const string& message) {
	messages_.insert(pair<int, string>(number, message));
}

void MessageBook::DeleteMessage(int number) {
	map<int, string>::iterator it = messages_.begin();
	while(it!=messages_.end()){
		if (it->first == number) {
			messages_.erase(it);
			break;
		}
		it++;
	}

}

vector<int> MessageBook::GetNumbers() const {
	vector<int> v;
	map<int, string> m = messages_;
	map<int, string>::iterator it = m.begin();
	while(it != m.end()){
		v.push_back(it->first);
		it++;
	}
	return v;
}

const string& MessageBook::GetMessage(int number) const {
	map<int, string> m = messages_;
	map<int, string>::iterator iter;
	iter = m.find(number);
	if(iter != m.end()){
       return iter->second;
	}
}
