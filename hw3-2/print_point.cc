#include <iostream>
using namespace std;

typedef struct{
	int xpos;
	int ypos;
}Point;

void getScale2xPoint(const Point* p, Point *p2){
  p2->xpos = p->xpos * 2;
  p2->ypos = p->ypos * 2;
}

void swapPoint(Point& p1, Point& p2){
  Point temp;
  temp = p1;
  p1 = p2;
  p2 = temp;
}

int main(){
  Point p1,p2;
  cin >> p1.xpos>>p1.ypos;
  cout << "Calling getScale2xPoint()"<<endl;
  getScale2xPoint(&p1,&p2);
  cout <<"P1 : "<<p1.xpos<< " "<< p1.ypos<<endl;
  cout <<"P2 : "<<p2.xpos<< " "<< p2.ypos<<endl;
  cout << "Calling swapPoint()"<<endl;
  swapPoint(p1,p2);
  cout <<"P1 : "<<p1.xpos<< " "<< p1.ypos<<endl;
  cout <<"P2 : "<<p2.xpos<< " "<< p2.ypos<<endl;

	return 0;
}
