#include "Rectangle.h"

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

void Rectangle::setArea(float area)
{
	m_area = area;
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

float Rectangle::returnArea()
{
	return m_area;
}