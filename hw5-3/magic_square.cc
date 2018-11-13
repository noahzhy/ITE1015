#include <iostream>
using namespace std;

void magic_square(int **a, int size) {
	int i, j;
	int x, y;
	i = 0;
	j = size / 2;
	for (int c = 1; c <= size * size; c++) {
		if (i < 0) {
			i = size - 1;
		}
		if (j >= size) {
			j = 0;
		}

		if (a[i][j] == 0) {
			a[i][j] = c;
		} else {
			i = x + 1;
			j = y;
			a[i][j] = c;
		}
		x = i;
		y = j;
		i -= 1;
		j += 1;
	}
}
