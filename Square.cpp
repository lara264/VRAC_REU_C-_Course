#include "square.h"

Square::Square(float w) {
	width = w;
}

Square::~Square() {

}

float Square::area() {
	return width * width;
}