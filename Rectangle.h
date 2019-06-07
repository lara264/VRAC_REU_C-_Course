#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {

public:
	Rectangle(float len, float width);	// The constructor prototype
	~Rectangle();	// The destructor prototype

	void setArea(float area);	// Setter
	void setLen(float len);
	void setWidth(float width);

	float getLen();
	float getWidth();
	float getArea();

	float returnArea();	// Getter

protected:
	float m_area;	// Member variable
	float len;
	float width;
};

#endif RECTANGLE_H