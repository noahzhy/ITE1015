#ifndef __reply_admin__
#define __reply_admin__
#include <iostream>

using namespace std;

class ReplyAdmin {
	private:
		string *chats;

	public:
		ReplyAdmin();
		~ReplyAdmin();
		int getChatCount();
		bool addChat(string _chat);
		bool removeChat(int _index);
		bool removeChat(int *_indices, int _count);
		bool removeChat(int _start, int _end);
};

#endif
