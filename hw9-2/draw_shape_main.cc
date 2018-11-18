#include <iostream>
#include <string>
#include <vector>
#include "draw_shape.h"

using namespace std;

int main() {
	vector<Shape*> shapes;

	size_t row, col;
	cin >> row >> col;
	Canvas canvas(row, col);
	canvas.Print();

	while (true) {
		string tok;
		cin >> tok;
		if (tok == "add") {
			string type;
			cin >> type;
			if (type == "rect") {
				int x,y,w,h;
				char b;
				cin>>x>>y>>w>>h>>b;
				Rectangle *pr = new Rectangle(x,y,w,h,b);
				shapes.push_back(pr);
			} else if (type == "tri_up") {
				int x,y,h;
				char b;
				cin>>x>>y>>h>>b;
				UpTriangle *ptu = new UpTriangle(x,y,h,b);
				shapes.push_back(ptu);
			} else if (type == "tri_down") {
				int x,y,h;
				char b;
				cin>>x>>y>>h>>b;
				DownTriangle *ptd = new DownTriangle(x,y,h,b);
				shapes.push_back(ptd);
			} else if (type == "diamond") {
				int x,y,h;
				char b;
				cin>>x>>y>>h>>b;
				Diamond *pd = new Diamond(x,y,h,b);
				shapes.push_back(pd);
			} else continue;
		} else if (tok == "draw") {
			canvas.Clear();
			for (int i = 0; i < shapes.size(); ++i) shapes[i]->Draw(&canvas);
			canvas.Print();
		} else if (tok == "delete") {
			int index;
			cin >>index;
			vector<Shape*>::iterator it = shapes.begin();
			for (int q=0; q<shapes.size() ; it++) {
				if (q == index) {
					shapes.erase(it);
				}
				q++;
			}

		} else if (tok == "dump") {
			int i = 0;
			vector<Shape*>::iterator it = shapes.begin();
			for (int i = 0; i < shapes.size(); ++i) {
				cout<<i<<" ";
				shapes[i]->Dump();
			}

		} else if (tok == "resize") {
			int row,col;
			cin >> row >> col;
			canvas.Resize(row,col);
		} else if (tok == "quit") {
			return 0;
		}
	}
	for (int i = 0; i < shapes.size(); ++i) delete shapes[i];
	shapes.clear();
	return 0;
}

