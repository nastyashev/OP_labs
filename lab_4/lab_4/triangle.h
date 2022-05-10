#pragma once
#include "point.h"

class triangle
{
private:
	point firstVertex;
	point secondVertex;
	point thirdVertex;
public:
	triangle();
	triangle(point, point, point);
	triangle(const triangle&);
	triangle(point);

	point getFirstVertex();
	point getSecondVertex();
	point getThirdVertex();

	triangle& operator ++();
	triangle& operator ++(int);
	triangle& operator +=(double);

	double perimetr();
};

void largestPerimetr(triangle, triangle, triangle);
void outputTriangle(triangle);
