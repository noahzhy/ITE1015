#include "string.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
  MyString pa;
  MyString pb;
  MyString pc;
  string p;
  char op;
  string right;
  int times;
  string command;

  while (1) {
    cin>>command;
    if(command == "quit"){
    	break;
	}
    if(command == "new") {
      cout<<"enter a"<<endl;
      cin>>pa;
      cout<<"enter b"<<endl;
      cin>>pb;
    }
    if(command == "a"){
    	cin>>op;
    	if(op == '+'){
    		cin>>right;
    		if(right == "b"){
    			pc = pa + pb;
				cout<<pc<<endl;
			}
		}
		if(op == '*'){
			cin>>times;
    		pc = pa * times;
			cout<<pc<<endl;
		}
	}
	if(command == "b"){
    	cin>>op;
    	if(op == '+'){
    		cin>>right;
    		if(right == "a"){
    			pc = pb + pa;
				cout<<pc<<endl;
			}
		}
		if(op == '*'){
			cin>>times;
    		pc = pb * times;
			cout<<pc<<endl;
		}
	}
  }
  return 0;
}
