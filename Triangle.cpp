#include "Triangle.h"

Triangle::Triangle() {
	base = NULL;
	height = NULL;
}

Triangle::Triangle(float b, float h) {
	base = b;
	height = h;
}

Triangle::~Triangle() {
	
}

Triangle Triangle::definingTri() {
	std::cout << "Hi, what's the base and height of your triangle? " << std::endl;

	float base, height;
	std::cin >> base >> height;

	Triangle r(base, height);
	return r;
}

bool Triangle::varsDefined(float b, float h) {
	if (b == NULL || h == NULL) return false;
	return true;
}

float Triangle::getArea() {
	if (varsDefined(base, height)) return (base + height) / 2;
	std::cout << "Either the base and/or the height are not defined. Please set these values before trying to calculate the area" << std::endl;
	return -1;
}

void Triangle::setBase(float b) {
	base = b;
}

void Triangle::setHeight(float h) {
	height = h;
}

float Triangle::getBase() {
	if (base == NULL) {
		std::cout << "Base is not defined" << std::endl;
		return -1;
	}
	return base;
}

float Triangle::getHeight() {
	if (height == NULL) {
		std::cout << "Height is not defined" << std::endl;
		return -1;
	}
	return height;
}

std::string Triangle::getInfo(Triangle t) {
	return "Given that the base is " + std::to_string(t.getBase()) + " and the height is " + std::to_string(t.getHeight()) + ", the area of the triangle is: " + std::to_string(t.getArea()) + "\n" + "The color of the square is: " + t.returnColor();
}