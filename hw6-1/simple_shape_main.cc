#include <iostream>
#include "simple_shape.h"
using namespace std;

int main(int argc, char const *argv[]) {
  char type;
  circle_shape circle;
  rectangle_shape rectangle;

  while(1){
    cout<<"shape?"<<endl;
  	cin>>type;
  	if(type == 'Q'){break;
	  }


  if(type == 'C'){
  	cin>>circle.x>>circle.y>>circle.r;
    cout<<"area: "<<circle.get_area()<<", "<<"perimeter: "<<circle.get_perimeter()<<endl;
  }
  if (type == 'R') {
    cin>>rectangle.x>>rectangle.y>>rectangle.x1>>rectangle.y1;
    cout<<"area: "<<rectangle.get_area()<<", "<<"perimeter: "<<rectangle.get_perimeter()<<endl;
  }

  }
  return 0;
}
