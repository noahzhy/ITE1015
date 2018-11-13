#include <iostream>
using namespace std;

void square(double &dvar) {
	dvar *= dvar;
}

int main() {
	double dvar = 0;
	scanf("%lf", &dvar);
	square(dvar);
	printf("%f\n", dvar);

	return 0;
}
