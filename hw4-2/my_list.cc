#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

string* split(const string& str, const string& delim) {
    string* string_list = new string[10];
    int idx = 0;
    char * token = strtok(const_cast<char*>(str.c_str()), delim.c_str());
    while (token != NULL) {
      string_list[idx] = token;
      token = strtok(NULL, delim.c_str());
      ++idx;
    }
    return string_list;
}

struct Item {
  string name;
  string age;
  string id;
  string *subjects;
  struct Item *next;
};

struct Item* create_item() {
  Item *it = new Item;
  it->next = NULL;
  return it;
}

struct Item* find_end_of_list(struct Item* linked_list_first_item) {
  while(linked_list_first_item->next!=NULL){
    linked_list_first_item = linked_list_first_item->next;
  }
  return linked_list_first_item;
}

void insert_item(struct Item *prev_item, struct Item *item) {
  prev_item->next = item;
}

int main(void){
  int i=0;
  char str[100];
  ifstream fin;
  fin.open("input.txt");
  Item *it_head;
  while(fin.getline(str,100)){
    string *sa = split(str,":");
	Item *it = create_item();
	it->name = sa[0];
	it->age = sa[1];
	it->id = sa[2];
	it->subjects = split(sa[3], ",");
    if (i>0) {
      insert_item(find_end_of_list(it_head),it);
    }else{
    	it_head = it;
	}
    i++;
    //delete it;
  }
  fin.close();
  
  while(1){
    cout<<it_head->name<<"("<<it_head->id<<"): ";
    for (int j = 0; j < 10; j++) {
      if (it_head->subjects[j]!="") {
        if (j != 0){cout<<" & ";}
        cout<<it_head->subjects[j];
      }
    }
    cout<<endl;
    if (it_head->next == NULL) {
      break;
    }
    it_head = it_head->next;
  }
  delete it_head;
  return 0;
}
