#include <vector>
#include <iostream>
#include <chrono>
#include <thread>
#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "point.h"
void draw(const std::vector<Shape*> & v);
int main()
{
	const int frames = 10;
	const int sleep = 10;
	for (double i = 0; i < frames; i++)
	{
		Point rec(i + 1, 1);
		Point squ(i + 1, 1);
		Rectangle *r(rec,3.0,3.0);
		Square *s(squ,3.0);
		std::vector<Shape*> shapes = { &r, &s, };
		draw(shapes);
		std::this_thread::sleep_for(std::chrono::milliseconds(frameSleep));
	}
	return 0;
}
void draw(const std::vector<Shape*> & v)
{
	const double width = 80;
	const double height = 25;
	const double widthScale = 1;
	const double heightScale = 1.9;
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			if (v[i]->contains(Point(i, j)))
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}
