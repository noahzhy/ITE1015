#ifndef __Animals__
#define __Animals__

#include <iostream>
using namespace std;

class Animal {
public:
	Animal(int age, string name);
	virtual void printInfo();
protected:
	string name;
	int age;
};

class Zebra : public Animal {
public:
	Zebra(int age, string name, int numStripes);
	virtual void printInfo();
private:
	int numStripes;
};


class Cat : public Animal {
public:
	Cat(int age, string name, string favoriteToy);
	virtual void printInfo();
private:
	string favoriteToy;
};


#endif
