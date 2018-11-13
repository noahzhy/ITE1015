#include <iostream>
#include "sort.h"
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;
	if (n <= 0) {
		return 0;
	}
	int *a = new int [n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bubble_sort(a, n);
	for (int j = 0; j < n; j++) {
		cout << a[j] << " ";
	}
	cout << endl;
	delete [] a;
	return 0;
}
