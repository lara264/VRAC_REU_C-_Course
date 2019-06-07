#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(float length, float wid)
{
	// This is the constructor it is called every time
	len = length;
	width = wid;
}

Rectangle::~Rectangle()
{
	// This is the destructor
}

Rectangle Rectangle::definingRect() {
	std::cout << "Hi, what's the length and width of your rectangle? " << std::endl;

	float len, wid;
	std::cin >> len >> wid;

	Rectangle r(len, wid);
	return r;
}

void Rectangle::doMath(Rectangle r) {
	std::cout << "what is the area of the rectangle given that the length is " << r.getLen() << " and the width is " << r.getWidth() << std::endl;

	float response;

	std::cin >> response;

	if (response == r.getArea()) std::cout << "you can do math!" << std::endl;
	else {
		std::cout << "hmm, that wasn't the right answer" << std::endl;
		std::cout << "the right answer was " << r.getArea() << std::endl;
	}
}

void Rectangle::setLen(float len) {
	len = len;
}

void Rectangle::setWidth(float width) {
	width = width;
}

float Rectangle::getLen() {
	return len;
}

float Rectangle::getWidth() {
	return width;
}

float Rectangle::getArea() {
	return len * width;
}

float Rectangle::getPerimeter() {
	return (len * 2) + (width * 2);
}
