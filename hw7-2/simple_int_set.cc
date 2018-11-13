#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include "simple_int_set.h"
using namespace std;

SimpleIntSet::SimpleIntSet() {}

SimpleIntSet::~SimpleIntSet() {}

bool InputSet(set<int>* s){

}

set<int> SimpleIntSet::SetIntersection(const set<int>& set0, const set<int>& set1){
	set<int> setc;
	set_intersection(set0.begin(),set0.end(),set1.begin(),set1.end(), inserter(setc, setc.begin()));
	return setc;
}

set<int> SimpleIntSet::SetUnion(const set<int>& set0, const set<int>& set1){
	set<int> setc;
	set_union(set0.begin(), set0.end(), set1.begin(), set1.end(), inserter(setc, setc.begin()));
	return setc;
}

set<int> SimpleIntSet::SetDifference(const set<int>& set0, const set<int>& set1){
	set<int> setc;
	set_difference(set0.begin(),set0.end(),set1.begin(),set1.end(), inserter(setc, setc.begin()));
	return setc;
}
