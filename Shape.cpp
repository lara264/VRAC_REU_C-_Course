#include "shape.h"

Shape::Shape() {
	color = "";
}

Shape::~Shape() {

}

void Shape::setColor(std::string c) {
	color = c;
}

std::string Shape::returnColor() {
	if (varsDefined()) return color;
	return "color has not been defined";
}

bool Shape::varsDefined() {
	if (color.compare("") == 0) return false;
	return true;
}

float Shape::getArea() {
	return 0.0;
}

float Shape::getPerimeter() {
	return 0.0;
}