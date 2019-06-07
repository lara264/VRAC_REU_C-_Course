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