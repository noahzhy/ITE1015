#include <iostream>
using namespace std;

void rotateLeft(int* pa, int* pb, int* pc){
  int temp;
  temp = *pa;
  *pa = *pb;
  *pb = *pc;
  *pc = temp;
}

void rotateRight(int* pa, int* pb, int* pc){
  int temp;
  temp = *pc;
  *pc = *pb;
  *pb = *pa;
  *pa = temp;
}

int main() {
  int a = 10;
  int b = 20;
  int c = 30;
  int command;
  cout<<a<<":"<<b<<":"<<c<<endl;
  while (1){
  	cin>>command;
  	if (command == 3){
  		break;
	  }
  	if (command == 1) {
    	rotateLeft(&a,&b,&c);
  	}
  	if (command == 2) {
    	rotateRight(&a,&b,&c);
  	}
  	cout<<a<<":"<<b<<":"<<c<<endl;
  }

  return 0;
}
