#include <iostream>
#include "draw_shape.h"
using namespace std;

Shape::Shape(int x, int y, int w, int h, char shape) {
	this->x_ = x;
	this->y_ = y;
	this->w_ = w;
	this->h_ = h;
	this->shape_ = shape;
}

Square::Square(int x, int y, int w, char shape): Shape(x, y, w, w, shape) {

}
double Square::GetArea() {
	return this->w_ * this->w_;
}
int Square::GetPerimeter() {
	return this->w_ * 4;
}
void Square::Draw(int canvas_width, int canvas_height) {
	char **p = NULL;
	p = new char *[canvas_height];
	for (int i = 0; i < canvas_height; i++) {
		p[i] = new char[canvas_width];
	}
	for (int i = 0; i < canvas_height; i++) {
		for (int j = 0; j < canvas_width; j++) {
			p[i][j]='.';
		}
	}
	for(int i = this->y_; i<this->y_ + this->w_; i++) {
		for(int j = this->x_; j<this->x_ + this->w_; j++) {
			if((i>=0 && i<canvas_height)&&(j>=0 && j<canvas_width)) {
				p[i][j]=this->shape_;
			}
		}
	}
	for (int i = -1; i < canvas_height; i++) {
		if (i==-1) {
			cout<<" ";
		} else {
			cout<<i;
		}
		for (int j = -1; j < canvas_width; j++) {
			if (j>-1 && i==-1) {
				cout<<j;
			} else if(i>=0&&j>=0) {
				cout<<p[i][j];
			}

		}
		cout<<endl;
	}
	for (int i = 0; i < canvas_height; i++) {
		delete [] p[i];
		p[i] = NULL;
	}
	delete [] p;
	p = NULL;
}

Rectangle::Rectangle(int x, int y, int w, int h, char shape): Shape(x, y, w, h, shape) {

}
double Rectangle::GetArea() {
	return this->w_ * this->h_;
}
int Rectangle::GetPerimeter() {
	return (this->w_ + this->h_) * 2;
}
void Rectangle::Draw(int canvas_width, int canvas_height) {
	char **p = NULL;
	p = new char *[canvas_height];
	for (int i = 0; i < canvas_height; i++) {
		p[i] = new char[canvas_width];
	}

	for (int i = 0; i < canvas_height; i++) {
		for (int j = 0; j < canvas_width; j++) {
			p[i][j]='.';
		}
	}
	for(int i = this->y_; i<this->y_ + this->w_; i++) {
		for(int j = this->x_; j<this->x_ + this->h_; j++) {
			if((i>=0 && i<canvas_height)&&(j>=0 && j<canvas_width)) {
				p[i][j]=this->shape_;
			}
		}
	}
	for (int i = -1; i < canvas_height; i++) {
		if (i==-1) {
			cout<<" ";
		} else {
			cout<<i;
		}
		for (int j = -1; j < canvas_width; j++) {
			if (j>-1 && i==-1) {
				cout<<j;
			} else if(i>=0&&j>=0) {
				cout<<p[i][j];
			}

		}
		cout<<endl;
	}
	for (int i = 0; i < canvas_height; i++) {
		delete [] p[i];
		p[i] = NULL;
	}
	delete [] p;
	p = NULL;
}

Diamond::Diamond(int x, int y, int w, char shape): Shape(x, y, w, w, shape) {

}
double Diamond::GetArea() {
	return (this->w_ * 2 + 1) * (this->w_ * 2 + 1) / 2.0;
}
int Diamond::GetPerimeter() {
	return this->GetArea() / this->w_ * 4;
}
void Diamond::Draw(int canvas_width, int canvas_height) {
	char **p = NULL;
	p = new char *[canvas_height];
	for (int i = 0; i < canvas_height; i++) {
		p[i] = new char[canvas_width];
	}

	for (int i = 0; i < canvas_height; i++) {
		for (int j = 0; j < canvas_width; j++) {
			p[i][j]='.';
		}
	}
	for(int i = this->y_; i<this->y_ + this->w_*2+1; i++) {
		if(i<this->y_ + this->w_ +1) {
			for(int j = this->x_- i+this->y_; j< this->x_+i-this->y_+1; j++) {
				if((i>=0 && i<canvas_height)&&(j>=0 && j<canvas_width)) {
					p[i][j]=this->shape_;
				}
			}
		} else {
			for(int j = this->x_- i+this->y_+(i-this->y_-this->w_)*2; j< (this->x_- i+this->y_+(i-this->y_-this->w_)*2) + this->w_ * 2 - (i-this->y_-this->w_)*2+1; j++) {
				if((i>=0 && i<canvas_height)&&(j>=0 && j<canvas_width)) {
					p[i][j]=this->shape_;
				}
			}
		}
	}
	for (int i = -1; i < canvas_height; i++) {
		if (i==-1) {
			cout<<" ";
		} else {
			cout<<i;
		}
		for (int j = -1; j < canvas_width; j++) {
			if (j>-1 && i==-1) {
				cout<<j;
			} else if(i>=0&&j>=0) {
				cout<<p[i][j];
			}

		}
		cout<<endl;
	}

	for (int i = 0; i < canvas_height; i++) {
		delete [] p[i];
		p[i] = NULL;
	}
	delete [] p;
	p = NULL;
}
