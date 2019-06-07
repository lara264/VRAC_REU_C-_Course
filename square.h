#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square:public Shape {
	public:
		Square(float w);
		~Square();
		float area();
	protected:
		float width;
};

#endif SQUARE_H