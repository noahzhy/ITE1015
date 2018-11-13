#include <iostream>
using namespace std;

typedef struct{
	char name[7];
	int score;
}Person;

void printScoreStars(Person* persons, int len){
	cout<<persons->name<<" ";
	int count = int(len/5);
  for (size_t i = 0; i < count; i++) {
    cout<<"*";
  }
	cout<<endl;
}

int main(){
	Person p[3];
	for (size_t j = 0; j < 3; j++) {
		cin>>p[j].name>>p[j].score;
	}
	for (size_t k = 0; k < 3; k++) {
		printScoreStars(&p[k],p[k].score);
	}



	return 0;
}
