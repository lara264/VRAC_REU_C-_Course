#include <iostream>

#include "square.h"
#include "Rectangle.h"

int main() {

	//first instance of square
	Square s = Square(5.0);
	s.setColor("magenta");
	std::cout << s.getInfo(s) << std::endl << std::endl;;

	//second instance of square
	Square hi = Square(3.0);
	hi.setColor("sky blue");
	std::cout << hi.getInfo(hi) << std::endl << std::endl;;

	//third instance of square
	Square anotherOne = Square(8.0);
	anotherOne.setColor("violet");
	std::cout << anotherOne.getInfo(anotherOne) << std::endl << std::endl;;

	//first instance of rectangle
	Rectangle aRec = aRec.definingRect();

	aRec.doMath(aRec);
	aRec.setColor("gray");
	std::cout << "The color of the rectangle is: " << aRec.returnColor() << std::endl;

	//second instance of rectangle
	Rectangle anotherR = anotherR.definingRect();
	
	anotherR.doMath(anotherR);
	anotherR.setColor("lime green");
	std::cout << "The color of the rectangle is: " << anotherR.returnColor() << std::endl;

	//how to call the deconstructor
	//aRec.~Rectangle();

	return 0;
}

