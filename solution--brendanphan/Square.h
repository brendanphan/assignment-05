#include "rectangle.h"

class Square : public Rectangle
{
public:
	Square(Point center, double width) {};
	bool contains(const Point & p) const;
};