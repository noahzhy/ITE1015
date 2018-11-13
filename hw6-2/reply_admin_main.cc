#include <iostream>
#include <string>
#include "reply_admin.h"
using namespace std;

int main() {
	string command;
	ReplyAdmin ra;

	while (1) {
		getline(cin, command);
		if (command.find("#remove") != string::npos) {
			int tempArray[20],k=-1;
			if(command.find("-") != string::npos) {
				int q = command.find("-");
				ra.removeChat(command[q-1]-'0',command[q+1]-'0');
			} else {
				for(int i = 0; i < command.length(); i++) {
					if(isdigit(command[i])) {
						tempArray[++k] = command[i]-'0';
					}
				}
				if(k>=0) {
					ra.removeChat(tempArray,k+1);
				}
			}
		} else if (command == "#quit") {
			return 0;
		} else {
			ra.addChat(command);
		}
	}
	return 0;
}
