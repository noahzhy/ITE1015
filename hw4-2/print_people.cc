#include <iostream>
using namespace std;

struct Person{
  char name[10];
  int age;
};

int main() {
  int n;
  cin>> n;
  Person *pa = new Person[n];
  for (int i = 0; i < n; i++) {
    cin>>pa[i].name>>pa[i].age;
  }
  for (int j = 0; j < n; j++) {
    cout<<"Name:"<<pa[j].name<<", Age:"<<pa[j].age<<endl;
  }
  delete [] pa;
  return 0;
}
