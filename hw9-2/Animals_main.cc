#include "Animals.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<Animal*> animals;
	char t;
	Zebra *z;
	Cat *c;
	string name;
	int age,num;
	string toy;
	while(1){
		cin>>t;
		if(t=='0'){
			break;
		}
		if(t=='z'){
			cin>>name>>age>>num;
			z = new Zebra(age,name,num);
			animals.push_back(z);
		}
		if(t=='c'){
			cin>>name>>age>>toy;
			c = new Cat(age,name,toy);
			animals.push_back(c);
		}
	}
	vector<Animal*>::iterator it;
	it = animals.begin();
	

	while (it!=animals.end()) {
		(*it)->printInfo();
		it++;
	}
	
	
	return 0;
}
