#include "point.h"

class Shape
{
public:
	virtual bool contains(const Point & p) const = 0;
	virtual ~Shape() {};
};
