#include <iostream>
#include "world_clock.h"
using namespace std;

int main(int argc, char const *argv[]) {
	string command;
	WorldClock c;
	while (1) {
		cin>>command;
		if (command == "quit") {
			break;
		}
		if (command == "set") {
			cin>>c;
		}
		if (command == "tick") {
			int sec;
			cin>>sec;
			c.Tick(sec);
			cout<<c<<endl;
		}
	}
	return 0;
}
