#include <iostream>
#include "Container.h"
using namespace std;

int main(){
	MyVector<int> myvec1;
	myvec1.push_back(0);
	cout << myvec1.size() << endl;
	cout << myvec1.max_size() << endl;


	int arr[] = {1, 2, 3, 4, 5};
	MyVector < int > myvec2(arr, 5);
	cout << myvec2.size() << endl;
	cout << myvec2.max_size() << endl;
	myvec2.push_back(5);
	cout << myvec2.size() << endl;
	cout << myvec2.max_size() << endl;

	for(int n = 0; n < myvec2.size(); n++)
		cout << myvec2[n] << " ";
	cout << endl;

	myvec2.back() = 6;
	for(int n = 0; n < myvec2.size(); n++)
		cout << myvec2.at(n) << " ";
	cout << endl;

	MyVector < int > myvec3 = myvec1 + myvec2;
	for(int n = 0; n < myvec3.size(); n++)
		cout << myvec3.at(n) << " ";
	cout << endl;

	return 1;
}
