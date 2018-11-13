#include <iostream>
#include <cmath>
using namespace std;

typedef struct{
  double x;
  double y;
} Point;

typedef struct{
  char name[7];
  Point points[3];
} Person;

Point getMaxDistancePoint(Point *p, int size){
  Point maxPoint;
  double *distance = new double[size];
  double maxdistance = 0;
  for (int i = 0; i < size; i++) {
    distance[i] = sqrt(p[i].x * p[i].x + p[i].y * p[i].y);
    if (distance[i] >= maxdistance) {
      maxdistance = distance[i];
      maxPoint.x = p[i].x;
      maxPoint.y = p[i].y;
    }
  }
  return maxPoint;
}

int main(){
  Person p[3];
  for (size_t i = 0; i < 3; i++) {
    cin>>p[i].name;
    for (size_t j = 0; j < 3; j++) {
      cin>>p[i].points[j].x>>p[i].points[j].y;
    }
  }

  for (size_t k = 0; k < 3; k++) {
    cout<<p[k].name<<" ";
    Point mp = getMaxDistancePoint(p[k].points,3);
    cout<<"("<<mp.x<<", "<<mp.y<<")"<<endl;

  }

	return 0;
}
