#include <iostream>
#include "simple_account.h"
using namespace std;

int main(){
	simple_account id[10];
	int account_count = -1;
	char command;
	while(1){
		cout<<"Job?"<<endl;
		cin>>command;
		if(command == 'Q'){
			break;
		}
		if(command == 'N'){
			if(account_count<9){
				account_count = account_count + 1;
				id[account_count].id = account_count;
				cout<<"Account for user "<<id[account_count].id<<" registered"<<endl;
            	cout<<"Balance of user "<<id[account_count].id<<": "<<id[account_count].get_balance()<<endl;
			}else{
				cout<<"The number of accounts exceeds 10"<<endl;
			}

		}
		if(command == 'D'){
			int n;
			double amount;
			cin>>n>>amount;
			if(account_count<n){
				cout<<"Account does not exist"<<endl;
			}else{
				id[n].deposit(amount);
				cout<<"Success: Deposit to user "<<n<<" "<<amount<<endl;
				cout<<"Balance of user "<<id[n].id<<": "<<id[n].get_balance()<<endl;
			}
		}
		
		if(command == 'W'){
			int account;
			int amount;
			cin>>account>>amount;
			if(account_count<account){
				cout<<"Account does not exist"<<endl;
			}else{
				if(id[account].withdraw(amount)){
					cout<<"Success: ";	
				}else{
					cout<<"Failure: ";
				}
			
			}
			
		cout<<"Withdraw from user "<<id[account].id<<" "<<amount<<endl;
		cout<<"Balance of user "<<id[account].id<<": "<<id[account].get_balance()<<endl;
		}
		
		if(command == 'T'){
			int from, to_id;
			int amount;
			cin>>from>>to_id>>amount;
			if(account_count<from || account_count<to_id){
				cout<<"Account does not exist"<<endl;
			}else{
				if(id[from].transfer(&id[from],&id[to_id],amount)){
					cout<<"Success: Transfer from user "<<id[from].id<<" to user "<<id[to_id].id<<" "<<amount<<endl;
					cout<<"Balance of user "<<id[from].id<<": "<<id[from].get_balance()<<endl;
					cout<<"Balance of user "<<id[to_id].id<<": "<<id[to_id].get_balance()<<endl;
				}else{
					cout<<"Failure: Transfer from user "<<id[from].id<<" to user "<<id[to_id].id<<" "<<amount<<endl;
					cout<<"Balance of user "<<id[from].id<<": "<<id[from].get_balance()<<endl;
					cout<<"Balance of user "<<id[to_id].id<<": "<<id[to_id].get_balance()<<endl;
				}
			}
		}
		
		
		cout<<endl;
	}
	return 0;
}
