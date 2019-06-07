#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square :public Shape {
public:
	Square();
	Square(float w);
	~Square();

	float getArea();
	std::string getAreaSentence(Square s);

	float getPerimeter();
	std::string getPerimeterSentence(Square s);

	float getWidth();

	std::string getInfo(Square s);

protected:
	float width;
};

#endif SQUARE_H