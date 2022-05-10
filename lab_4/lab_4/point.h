#pragma once
#include <iostream>
#include <cmath>

class point
{
private:
	double x;
	double y;
	double z;
public:
	point();
	point(double, double, double);
	point(const point&);
	
	void setX(double);
	void setY(double);
	void setZ(double);

	double getX();
	double getY();
	double getZ();

	void printPoint();
	void inputPoint();
};
