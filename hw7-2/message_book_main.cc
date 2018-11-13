#include <iostream>
#include <string>
#include <vector>
#include "message_book.h"

using namespace std;

int main(){
	MessageBook mb;
	string command;
	int number;
	string head, str;
    while(1){
		cin>>command;
        if (command == "quit") {
          return 0;
        }else if(command == "list"){
        	vector<int> v = mb.GetNumbers();
        	vector<int>::iterator it = v.begin();
			while(it!=v.end()){
				cout<<*it<<": "<<mb.GetMessage(*it)<<endl;
				it++;
			}
        }else if(command == "delete"){
        	cin>>number;
        	mb.DeleteMessage(number);
        }else if(command == "add"){
			cin>>number;
			cin>>head;
			getline(cin, str);
			str = head + str;
			mb.AddMessage(number,str);
		}else if(command == "print"){
			cin>>number;
			cout<<mb.GetMessage(number)<<endl;
			cout<<endl;
		}
    }
    return 0;
}
