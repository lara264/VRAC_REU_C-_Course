#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape {
	public:
		Shape();
		~Shape();

		//color functions
		void setColor(std::string c);
		std::string returnColor();

		//area function
		float getArea();

		//perimeter function
		float getPerimeter();

	protected:
		//color attribute
		std::string color;

};

#endif SHAPE_H

