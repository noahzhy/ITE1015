#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int *pa = new int[n];
	for (int i = 0; i < n; i++) {
		pa[i] = i;
		cout << pa[i] << " ";
	}
	cout << endl;
	delete [] pa;
	return 0;
}
