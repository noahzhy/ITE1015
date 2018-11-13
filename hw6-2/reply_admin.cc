#include <iostream>
#include <string>
#include <cstring>
#include "reply_admin.h"
#define NUM_OF_CHAT 10

using namespace std;

ReplyAdmin::ReplyAdmin() {
	this->chats = new string[NUM_OF_CHAT];
	chats[0]="Hello, Reply Administrator!";
	chats[1]="I will be a good programmer.";
	chats[2]="This class is awesome.";
	chats[3]="Professor Lim is wise.";
	chats[4]="Two TAs are kind and helpful.";
	chats[5]="I think male TA looks cool.";
}
ReplyAdmin::~ReplyAdmin() {
	delete [] this->chats;
}

int ReplyAdmin::getChatCount() {
	int count = 0;
	for (int i = 0; i < NUM_OF_CHAT; i++) {
		if (this->chats[i].empty()) {
			break;
		}
		count++;
	}
	return count;
}

bool ReplyAdmin::addChat(string _chat) {
	int temp;
	for(int t = 0; t<NUM_OF_CHAT; t++) {
		if((this->chats[t][0]=='\0')||(this->chats[t].empty())) {
			temp = t;
			break;
		}
	}
	if(temp>0&&temp<NUM_OF_CHAT) {
		chats[temp] = _chat;
	} else {
		return false;
	}
	for(int x = 0; x<getChatCount(); x++) {
		if(chats[x][0]!='\0') {
			cout<<x<<" "<<this->chats[x]<<endl;
		}
	}
	return true;
}

bool ReplyAdmin::removeChat(int _index) {
	if (_index < NUM_OF_CHAT && _index >= 0) {
		this->chats[_index] = '\0';
		return true;
	} else {
		return false;
	}
}

bool ReplyAdmin::removeChat(int *_indices, int _count) {
	string temp;
	int mark;
	int p;
	for (int i = 0; i < _count; i++) {
		removeChat(_indices[i]);
	}
	for(int j = 0; j<this->getChatCount(); j++) {
		if(chats[j][0]=='\0') {
			for(p = j+1; p < this->getChatCount(); p++) {
				if(chats[p][0]!='\0') {
					mark = p;
					break;
				}
			}
			if(mark>0){
				temp = chats[j];
				chats[j] = chats[mark];
				chats[mark] = temp;
			}
		}
	}
	for(int x = 0; x<this->getChatCount(); x++) {
		if(chats[x][0]!='\0') {
			cout<<x<<" "<<this->chats[x]<<endl;
		}
	}
	return true;
}

bool ReplyAdmin::removeChat(int _start, int _end) {
	int temp[20],count=0;
	for (int i = _start; i <= _end; i++) {
		temp[count++]=i;
	}
	if(removeChat(temp,count)) {
		return true;
	}
}

