#include <iostream>
using namespace std;

struct Person{
  char name[10];
  int age;
};

int main() {
  Person person1;
  cin>>person1.name>>person1.age;
  cout<<"name: "<<person1.name<<endl;
  cout<<"age: "<<person1.age<<endl;
  return 0;
}
