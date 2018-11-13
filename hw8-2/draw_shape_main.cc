#include <iostream>
#include <string>
#include "draw_shape.h"
using namespace std;

int main() {
	int X, Y;
	string command;
	cin >> X >> Y;
	int x, y, w, h;
	char s;
	while (1) {
		cin >> command;
		if (command == "quit") {
			return 0;
		}
		if (command == "rect") {
			cin >> x >> y >> w >> h >> s;
			Rectangle rect(x, y, w, h, s);
			cout << "Area: " << rect.GetArea() << endl;
			cout << "Perimeter: " << rect.GetPerimeter() << endl;
			rect.Draw(X,Y);
		}
		if (command == "square") {
			cin >> x >> y >> w >> s;
			Square sq(x, y, w, s);
			cout << "Area: " << sq.GetArea() << endl;
			cout << "Perimeter: " << sq.GetPerimeter() << endl;
			sq.Draw(X,Y);
		}
		if (command == "diamond") {
			cin >> x >> y >> w >> s;
			Diamond dm(x, y, w, s);
			cout << "Area: " << dm.GetArea() << endl;
			cout << "Perimeter: " << dm.GetPerimeter() << endl;
			dm.Draw(X,Y);
		}
	}
	return 0;
}
