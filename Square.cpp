#include "square.h"

Square::Square(float w) {
	width = w;
}

Square::~Square() {

}

float Square::getArea() {
	return width * width;
}

std::string Square::getAreaSentence(Square s) {
	return "Given that the width of one side is " + std::to_string(s.getWidth()) + ", the area of the square is: " + std::to_string(s.getArea());
}

float Square::getPerimeter() {
	return width * 4;
}

std::string Square::getPerimeterSentence(Square s) {
	return "Given that the width of one side is " + std::to_string(s.getWidth()) + ", the perimeter of the square is: " + std::to_string(s.getPerimeter());
}

float Square::getWidth() {
	return width;
}

std::string Square::getInfo(Square s) {
	return s.getAreaSentence(s) + "\n" + s.getPerimeterSentence(s) + "\n" + "The color of the square is: " + s.returnColor();
}