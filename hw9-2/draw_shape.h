#ifndef __draw_shape__
#define __draw_shape__
#include <iostream>
#include <vector>
using namespace std;

class Canvas {
	public:
		Canvas(size_t row, size_t col);
		~Canvas();
		void Resize(size_t w, size_t h);
		bool DrawPixel(int x, int y, char brush);
		void Print();
		void Clear();
	private:
		size_t row_;
		size_t col_;
		char **p;
};

class Shape {
	public:
		virtual ~Shape();
		virtual void Draw(Canvas* canvas) {};
		virtual void Dump(){};
	protected:
		int x, y;
		int width, height;
		char brush;
};

class Rectangle : public Shape {
	public:
		Rectangle(int x,int y,int w,int h,char brush);
		virtual void Draw(Canvas* canvas);
		virtual void Dump();
};

class UpTriangle : public Shape {
	public:
		UpTriangle(int x,int y,int h,char brush);
		virtual void Draw(Canvas* canvas);
		virtual void Dump();
};

class DownTriangle : public Shape {
	public:
		DownTriangle(int x,int y,int h,char brush);
		virtual void Draw(Canvas* canvas);
		virtual void Dump();
};

class Diamond : public Shape {
	public:
		Diamond(int x,int y,int h,char brush);
		virtual void Draw(Canvas* canvas);
		virtual void Dump();
};

#endif
