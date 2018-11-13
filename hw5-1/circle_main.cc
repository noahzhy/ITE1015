#include <iostream>
#include "circle.h"
using namespace std;

int main(int argc, char const *argv[]) {
	double r;
	cin>>r;
	cout<<"Perimeter: "<<getCirclePerimeter(r)<<endl;
	cout<<"Area: "<<getCircleArea(r)<<endl;
	
	return 0;
}
