#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle:public Shape {

public:
	Rectangle(float len, float width);	// The constructor prototype
	~Rectangle();	// The destructor prototype

	Rectangle definingRect();

	void doMath(Rectangle r);

	void setLen(float len); // Setter
	void setWidth(float width);

	float getLen();
	float getWidth();
	float getArea();
	float getPerimeter();

protected:
	// Member variables
	float len;
	float width;
};

#endif RECTANGLE_H