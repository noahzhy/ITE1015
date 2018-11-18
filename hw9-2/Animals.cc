#include "Animals.h"
#include <iostream>
using namespace std;

Animal::Animal(int age, string name) {
	this->age = age;
	this->name = name;
}

void Animal::printInfo() {

}

Zebra::Zebra(int age, string name, int numStripes): Animal(age, name) {
	this->numStripes = numStripes;
}

void Zebra::printInfo() {
	cout<<"Zebra, Name: "<<this->name<<", Age: "<<this->age<<", Number of stripes: "<<this->numStripes<<endl;
}

Cat::Cat(int age, string name, string favoriteToy): Animal(age, name) {
	this->favoriteToy = favoriteToy;
}

void Cat::printInfo() {
	cout<<"Cat, Name: "<<this->name<<", Age: "<<this->age<<", Favorite toy: "<<this->favoriteToy<<endl;
}
