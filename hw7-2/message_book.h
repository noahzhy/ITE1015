#ifndef __message_book__
#define __message_book__
#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

class MessageBook {
public:
	MessageBook();
	~MessageBook();

	void AddMessage(int number, const string& message);
	void DeleteMessage(int number);
	vector<int> GetNumbers() const;
	const string& GetMessage(int number) const;

private:
	map<int, string> messages_;
};

#endif
