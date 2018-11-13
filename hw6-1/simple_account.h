#pragma once

class simple_account{
public:
  int id;
  double balance;

public:
simple_account();
bool transfer(simple_account *from_id, simple_account *to_id, double amount);
double get_balance();
bool deposit(double amount);
bool withdraw(double amount);

};
