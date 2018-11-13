#ifndef __draw_shape__
#define __draw_shape__
#include <iostream>

using namespace std;

class Shape {
public:
	Shape();
	Shape(int x, int y, int w, int h, char shape);

	double GetArea() {};
	int GetPerimeter() {};
	void Draw(int canvas_width, int canvas_height) {};

protected:
	int X, Y, x_, y_, w_, h_;
	char shape_;
};

class Square : public Shape {
public:
	Square(int x, int y, int w, char shape);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
};

class Rectangle : public Shape {
public:
	Rectangle(int x, int y, int w, int h, char shape);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
};

class Diamond : public Shape {
public:
	Diamond(int x, int y, int w, char shape);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
};

#endif
