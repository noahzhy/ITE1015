#include <iostream>
using namespace std;

int main() {
	double *parr;
	double d[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	parr = d;

	for (size_t i = 0; i < 5; i++) {
		*(parr + i) *= 2;
		// cout << *(parr + i) << endl;
		printf("%f\n", *(parr + i));
	}

	return 0;
}
