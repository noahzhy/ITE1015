#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include "simple_int_set.h"

using namespace std;

int main() {
	string inputs,ls,rs;
	stringstream ss;
	SimpleIntSet s;
	set<int> left, right, c;
	int type = 0;
	int temp, pos=-1;
	while (1) {
		getline(cin,inputs);
		left.clear();
		right.clear();
		pos = 0;

		if (inputs == "0") {
			return 0;
		}

		if(inputs.find("+")!= string::npos) {
			type = 1;
			pos = inputs.find("+");
		}
		if(inputs.find("-")!= string::npos) {
			type = 2;
			pos = inputs.find("-");
		}
		if(inputs.find("*")!= string::npos) {
			type = 3;
			pos = inputs.find("*");
		}

		ls = inputs.substr(0,pos-1);
		rs = inputs.substr(pos+1);

		int leftATempPos = ls.find("{")+1;
		int leftBTempPos = ls.find("}")-ls.find("{")-1;
		int rightATempPos = rs.find("{")+1;
		int rightBTempPos = rs.find("}")-rs.find("{")-1;

		if((leftATempPos>=0 && leftBTempPos>0)&&(rightATempPos>=0 && rightBTempPos> 0)) {
			ss.str(ls.substr(leftATempPos,leftBTempPos));
			while (ss>>temp) {
				left.insert(temp);
			}
			ss.clear();
			ss.str(rs.substr(rightATempPos,rightBTempPos));
			while (ss>>temp) {
				right.insert(temp);
			}
			ss.clear();
		}else{
			type = 0;
		}
		switch(type) {
			case 1:
				c = s.SetUnion(left,right);
				break;
			case 2:
				c = s.SetDifference(left,right);
				break;
			case 3:
				c = s.SetIntersection(left,right);
				break;
			case 0:
				cout<<"input is incorrect"<<endl;
				break;
			default:
				cout<<"operation error!"<<endl;
				break;
		}
		if(type>0) {
			set<int>::iterator it = c.begin();
			cout<<"{ ";
			while (it!=c.end()) {
				cout<<*it<<" ";
				it++;
			}
			cout<<"}"<<endl;
		}
	}
	return 0;
}
