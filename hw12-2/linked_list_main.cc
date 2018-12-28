#include <iostream>
#include "linked_list.h"
using namespace std;

int main(){
  int array[5] = {12, 7, 9, 21, 13 };
  List<int> li(array, 5);
  cout<<li;

  li.pop_back();
  cout<<li;

  li.push_back(15);
  cout<<li;

  li.pop_front();
  cout<<li;

  li.push_front(8);
  cout<<li;

  li.insert_at(4, 19);
  cout<<li;

  li.remove_at(1);
  cout<<li;

  return 0;
}
