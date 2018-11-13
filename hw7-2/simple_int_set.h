#ifndef __simple_int_set__
#define __simple_int_set__

#include <iostream>
#include <set>
using namespace std;

class SimpleIntSet{

public:
	SimpleIntSet();
	~SimpleIntSet();

	bool InputSet(set<int>* s);

	set<int> SetIntersection(const set<int>& set0, const set<int>& set1);
	set<int> SetUnion(const set<int>& set0, const set<int>& set1);
	set<int> SetDifference(const set<int>& set0, const set<int>& set1);

};

#endif
