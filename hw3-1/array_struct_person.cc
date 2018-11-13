#include <iostream>
using namespace std;

struct Person{
  char name[10];
  int age;
};

int main() {
  Person person[3];
  for (size_t i = 0; i < 3; i++) {
    cin>> person[i].name>>person[i].age;
  }
  for (size_t j = 0; j < 3; j++) {
    cout<<"Name:"<<person[j].name<<", Age:"<<person[j].age<<endl;
  }
  return 0;
}
