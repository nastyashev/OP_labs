#include "point.h"

//class constructors

point::point()
{
	x = 0;
	y = 0;
	z = 0;
}

point::point(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

point::point(const point& Point)
{
	this->x = Point.x;
	this->y = Point.y;
	this->z = Point.z;
}

//setters

void point::setX(double num) { x = num; }

void point::setY(double num) { y = num; }

void point::setZ(double num) { z = num; }

//getters

double point::getX() { return x; }

double point::getY() { return y; }

double point::getZ() { return z; }

//other class methods

void point::printPoint()
{
	std::cout << "x = " << x << "\ty = " << y << "\tz = " << z << std::endl;
}

void point::inputPoint()
{
	std::cout << "x = "; std::cin >> x;
	std::cout << "y = "; std::cin >> y;
	std::cout << "z = "; std::cin >> z;
}
