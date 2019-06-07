#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle: public Shape {

public:
	Triangle();
	Triangle(float b, float h);
	~Triangle();

	Triangle definingTri();

	bool varsDefined(float b, float h);

	float getArea();

	void setBase(float b);
	void setHeight(float h);

	float getBase();
	float getHeight();

	std::string getInfo(Triangle t);

protected:
	float base;
	float height;

};

#endif TRIANGLE_H
