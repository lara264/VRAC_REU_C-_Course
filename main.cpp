#include <iostream>

#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"

std::string choice(std::string response) {
	std::string responseLowered = "";
	for (auto c : response) {
		c = tolower(c);
		responseLowered += c;
	}

	std::cout << responseLowered << std::endl;

	if (responseLowered.compare("rectangle") == 0) {
		
	}

	return "";
}

int main() {

	//undefined variables in shape
	Shape aShape;
	std::cout << aShape.returnColor() << std::endl;

	//first instance of square
	Square s = Square(5.0);
	s.setColor("magenta");
	std::cout << s.getInfo(s) << std::endl << std::endl;

	//second instance of square
	Square hi = Square(3.0);
	hi.setColor("sky blue");
	std::cout << hi.getInfo(hi) << std::endl << std::endl;;

	//third instance of square
	Square anotherOne = Square(8.0);
	anotherOne.setColor("violet");
	std::cout << anotherOne.getInfo(anotherOne) << std::endl << std::endl;

	//square with no width defined
	Square boop;
	std::cout << boop.getArea() << std::endl;

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

	//first instance of triangle
	Triangle t = t.definingTri();
	t.setColor("white");
	std::cout << t.getInfo(t) << std::endl;

	//undefined triangle variables
	Triangle t2;
	std::cout << t2.getBase() << std::endl;
	t2.setBase(5);
	std::cout << t2.getBase() << std::endl;
	std::cout << t2.getArea() << std::endl;

	//how to call the deconstructor
	//aRec.~Rectangle();

	//let's make a mess lol

	bool keepGoing = true;
	std::string response;

	std::cout << "Hi, welcome to shapes (a little boring, but bear with me please :)" << std::endl;
	
	while (keepGoing) {

		std::cin >> response;

		std::cout << choice(response) << std::endl;



		std::cout << "keep going?";
		std::cin >> response;

		if (response.compare("yes") == 0) keepGoing = true;
		else keepGoing = false;
	
	}

	return 0;
}

