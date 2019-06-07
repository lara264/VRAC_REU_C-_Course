#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle: public Shape {

public:

	Circle();
	~Circle();


protected:
	float radius;
};

#endif CIRCLE_H