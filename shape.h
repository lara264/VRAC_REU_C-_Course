#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape {
	public:
		Shape();
		~Shape();
		void setColor(std::string c);
		std::string returnColor();
	protected:
		std::string color;
};

#endif SHAPE_H

