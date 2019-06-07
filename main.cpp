// main.cpp : Defines the entry point for the console application.
//

#include "Rectangle.h"	// Coppies all the rectangle code into this file
#include <iostream>

Rectangle definingRect() {
	std::cout << "Hi, what's the length and width of your rectangle? " << std::endl;

	float len, wid;
	std::cin >> len >> wid;

	Rectangle r(len, wid);
	return r;
}

void doMath(Rectangle r) {
	std::cout << "what is the area of the rectangle given that the length is " << r.getLen() << " and the width is " << r.getWidth() << std::endl;

	float response;

	std::cin >> response;

	if (response == r.getArea()) std::cout << "you can do math!" << std::endl;
	else {
		std::cout << "hmm, that wasn't the right answer" << std::endl;
		std::cout << "the right answer was " << r.getArea() << std::endl;
	}
}

int main()
{

	Rectangle aRec = definingRect();

	doMath(aRec);

	Rectangle anotherR = definingRect();

	doMath(anotherR);

	//how to call the deconstructor
	//aRec.~Rectangle();

	
    return 0;
}

