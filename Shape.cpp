#include "shape.h"

Shape::Shape() {

}

Shape::~Shape() {

}

void Shape::setColor(std::string c) {
	color = c;
}

std::string Shape::returnColor() {
	return color;
}

float Shape::getArea() {
	return 0.0;
}

float Shape::getPerimeter() {
	return 0.0;
}