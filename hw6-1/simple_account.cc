#include <iostream>
#include "simple_account.h"
using namespace std;

simple_account::simple_account(){
	this->balance = 0;
}

bool simple_account::transfer(simple_account *from_id, simple_account *to_id, double amount){
	if (from_id->balance>=amount) {
		from_id->balance = from_id->balance - amount;
		to_id->balance = to_id->balance + amount;
		return true;
		
	}else{
  	return false;
  } 
}

double simple_account::get_balance(){
  return this->balance;
}

bool simple_account::deposit(double amount){
	this->balance = this->balance + amount;
	return true;
}

bool simple_account::withdraw(double amount){
  if (this->balance>=amount) {
  	this->balance = this->balance - amount;
    return true;
  }else{
  	return false;
  } 
}
