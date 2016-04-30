#include <vector>
#include "square.h"

bool Rectangle::contains(const Point & p) const
{
	std::vector<Point> list; //vector of all the points inside a shape
	for (int i = x - width, i < x + width; i++) //for the width
	{
			list.push_back(i, i); //create a vector filled with points inside the shape
			for (int k = 0; k < list.size(); k++) //for all the points inside the shape
			{
				if (p == list[k]) //if point p is in the shape then return true
					return true;
				else //else return false
					return false;
			}
	}
}