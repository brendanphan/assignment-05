#include "shape.h"

class Rectangle :public Shape
{
private:
	Point center;
	double width;
	double height;
public:
	Rectangle(Point center, double width, double height) {};
	bool contains(const Point & p) const;
};