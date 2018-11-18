#include <iostream>
#include "draw_shape.h"
#include <vector>
using namespace std;

Shape::~Shape() {
}

Canvas::Canvas(size_t row, size_t col) {
	this->row_ = row;
	this->col_ = col;
	this->p = NULL;
	this->p = new char *[this->col_];
	for (size_t i = 0; i < this->col_; i++) {
		this->p[i] = new char [this->row_];
	}
	this->Clear();
}

Canvas::~Canvas() {
	for (int i = 0; i < this->col_; i++) {
		delete [] this->p[i];
		this->p[i] = NULL;
	}
	delete [] this->p;
	this->p = NULL;
}

void Canvas::Resize(size_t w, size_t h) {
	this->row_ = w;
	this->col_ = h;
	this->Clear();
}

bool Canvas::DrawPixel(int x, int y, char brush) {
	if((x<this->col_&& x>=0) && (y<this->row_ && y>=0)) {
		this->p[x][y] = brush;
	}
}

void Canvas::Print() {
	for (size_t i = 0; i < this->row_; i++) {
		if (i==0) {
			cout<<" ";
			cout<<i%10;
		} else {
			cout<<i%10;
		}
	}
	cout<<endl;
	for (size_t i = 0; i < this->col_; i++) {
		cout<<i%10;
		for (size_t j = 0; j < this->row_; j++) {
			cout<<this->p[i][j];
		}
		cout<<endl;
	}
}

void Canvas::Clear() {
	for (size_t i = 0; i < this->col_; i++) {
		for(size_t j = 0; j < this->row_; j++) {
			this->p[i][j]='.';
		}
	}
}

Rectangle::Rectangle(int x,int y,int w,int h,char brush) {
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
	this->brush = brush;
}
void Rectangle::Draw(Canvas* canvas) {
	for(int i = this->y; i<this->y + this->height; i++) {
		for(int j = this->x; j<this->x + this->width; j++) {
			canvas->DrawPixel(i,j,this->brush);
		}
	}
}

UpTriangle::UpTriangle(int x,int y,int h,char brush) {
	this->x = x;
	this->y = y;
	this->height = h;
	this->brush = brush;
}
void UpTriangle::Draw(Canvas* canvas) {
	for(int i = this->y; i<this->y + this->height*2+1; i++) {
		if(i<this->y + this->height +1) {
			for(int j = this->x- i+this->y; j< this->x+i-this->y+1; j++) {
				canvas->DrawPixel(i,j,this->brush);
			}
		}
	}
}

DownTriangle::DownTriangle(int x,int y,int h,char brush) {
	this->x = x;
	this->y = y;
	this->height = h;
	this->brush = brush;
}
void DownTriangle::Draw(Canvas* canvas) {
	int reduce = 0;
	for (int i = this->x; i > this->x - this->height; i--) {
		for (int j = this->y - reduce; j < this->y - reduce + (this->x - i ) * 2 + 1; j++) {
			canvas->DrawPixel(i,j,this->brush);
		}
		reduce ++;
	}
}

Diamond::Diamond(int x,int y,int h,char brush) {
	this->x = x;
	this->y = y;
	this->height = h;
	this->brush = brush;
}
void Diamond::Draw(Canvas* canvas) {
	for(int i = this->y; i<this->y + this->height*2+1; i++) {
		if(i<this->y + this->height +1) {
			for(int j = this->x- i+this->y; j< this->x+i-this->y+1; j++) {
				canvas->DrawPixel(i,j,this->brush);
			}
		} else {
			for(int j = this->x- i+this->y+(i-this->y-this->height)*2; j< (this->x- i+this->y+(i-this->y-this->height)*2) + this->height * 2 - (i-this->y-this->height)*2+1; j++) {
				canvas->DrawPixel(i,j,this->brush);
			}
		}
	}
}

void Rectangle::Dump(){
	cout<<"rect "<<this->x<<" "<<this->y<<" "<<this->width<<" "<<this->height <<" "<<this->brush<<endl;
}

void UpTriangle::Dump(){
	cout<<"tri_up "<<this->x<<" "<<this->y<<" "<<this->height <<" "<<this->brush<<endl;
}

void DownTriangle::Dump(){
	cout<<"tri_down "<<this->x<<" "<<this->y<<" "<<this->height <<" "<<this->brush<<endl;
}

void Diamond::Dump(){
	cout<<"diamond "<<this->x<<" "<<this->y<<" "<<this->height <<" "<<this->brush<<endl;
}

