#ifndef __sorted_array__
#define __sorted_array__

#include <iostream>
#include <vector>

using namespace std;
class SortedArray {
public:
	SortedArray();
	~SortedArray();

	void AddNumber(int num);

	vector<int> GetSortedAscending()const;
	vector<int> GetSortedDescending()const;
	int GetMax() const;
	int GetMin() const;

private:
	std::vector<int> numbers_;
};

#endif
