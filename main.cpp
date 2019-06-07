#include <iostream>

#include "square.h"
#include "Rectangle.h"

int main() {

	Square s = Square(5.0);
	std::cout << s.area() << std::endl;
	s.setColor("magenta");
	std::cout << s.returnColor() << std::endl;

	Square hi = Square(3.0);
	std::cout << hi.area() << std::endl;
	hi.setColor("sky blue");
	std::cout << hi.returnColor() << std::endl;

	Square anotherOne = Square(8.0);
	std::cout << anotherOne.area() << std::endl;
	anotherOne.setColor("violet");
	std::cout << anotherOne.returnColor() << std::endl;

	Rectangle aRec = aRec.definingRect();

	aRec.doMath(aRec);

	Rectangle anotherR = anotherR.definingRect();

	anotherR.doMath(anotherR);

	//how to call the deconstructor
	//aRec.~Rectangle();

	return 0;
}

