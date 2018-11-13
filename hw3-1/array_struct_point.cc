#include <iostream>
using namespace std;

typedef struct{
    int xpos;
    int ypos;
} Point;

void scale2x(Point* pp){
    pp->xpos *= 2;
    pp->ypos *= 2;
}

int main() {
  Point p[3];
  for (size_t i = 0; i < 3; i++) {
    cin>>p[i].xpos>>p[i].ypos;
    scale2x(&p[i]);
  }

  for (size_t j = 0; j < 3; j++) {
    cout<<"["<<j<<"] "<<p[j].xpos<<" "<<p[j].ypos<<endl;
  }
  return 0;
}
