#include "triangle.h"
#include "point.h"

//class constructors

triangle::triangle()
{
	firstVertex.setX(0);
	firstVertex.setY(0);
	firstVertex.setZ(0);

	secondVertex.setX(1);
	secondVertex.setY(1);
	secondVertex.setZ(1);

	thirdVertex.setX(2);
	thirdVertex.setY(2);
	thirdVertex.setZ(2);
}

triangle::triangle(point firstVertex, point secondVertex, point thirdVertex)
{
	this->firstVertex = firstVertex;
	this->secondVertex = secondVertex;
	this->thirdVertex = thirdVertex;
}

triangle::triangle(const triangle &T)
{
	this->firstVertex = T.firstVertex;
	this->secondVertex = T.secondVertex;
	this->thirdVertex = T.thirdVertex;
}

triangle::triangle(point firstVertex1) : firstVertex(firstVertex1), secondVertex(0, 1, 2), thirdVertex(1, 2, 3) {}

//getters

point triangle::getFirstVertex() { return firstVertex; }

point triangle::getSecondVertex() { return secondVertex; }

point triangle::getThirdVertex() { return thirdVertex; }

//operator overload

triangle& triangle::operator++()
{
	this->firstVertex.setX(this->firstVertex.getX() + 1);
	this->secondVertex.setX(this->secondVertex.getX() + 1);
	this->thirdVertex.setX(this->thirdVertex.getX() + 1);
	return *this;
}

triangle& triangle::operator++(int a)
{
	this->firstVertex.setY(this->firstVertex.getY() + 1);
	this->secondVertex.setY(this->secondVertex.getY() + 1);
	this->thirdVertex.setY(this->thirdVertex.getY() + 1);
	return *this;
}

triangle& triangle::operator+=(double value)
{
	this->firstVertex.setX(this->firstVertex.getX() + value);
	this->firstVertex.setY(this->firstVertex.getY() + value);
	this->firstVertex.setZ(this->firstVertex.getZ() + value);

	this->secondVertex.setX(this->firstVertex.getX() + value);
	this->secondVertex.setY(this->firstVertex.getY() + value);
	this->secondVertex.setZ(this->firstVertex.getZ() + value);

	this->thirdVertex.setX(this->firstVertex.getX() + value);
	this->thirdVertex.setY(this->firstVertex.getY() + value);
	this->thirdVertex.setZ(this->firstVertex.getZ() + value);

	return *this;
}

//other class methods

double triangle::perimetr()
{
	double x1 = firstVertex.getX();
	double y1 = firstVertex.getY();
	double z1 = firstVertex.getZ();
	
	double x2 = secondVertex.getX();
	double y2 = secondVertex.getY();
	double z2 = secondVertex.getZ();

	double x3 = thirdVertex.getX();
	double y3 = thirdVertex.getY();
	double z3 = thirdVertex.getZ();

	double side1 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2) + pow((z1 - z2), 2));
	double side2 = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2) + pow((z2 - z3), 2));
	double side3 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2) + pow((z3 - z1), 2));

	double P = side1 + side2 + side3;
	return P;
}

//functions

void largestPerimetr(triangle T1, triangle T2, triangle T3)
{
	double P1 = T1.perimetr();
	double P2 = T2.perimetr();
	double P3 = T3.perimetr();

	if (P1 > P2) {
		if (P1 > P3) {
			std::cout << "T1 has the largest perimetr: " << P1 << std::endl;
		}
		else {
			std::cout << "T3 has the largest perimetr: " << P3 << std::endl;
		}
	}
	else if (P2 > P3) {
		std::cout << "T2 has the largest perimetr: " << P2 << std::endl;
	}
	else {
		std::cout << "T3 has the largest perimetr: " << P3 << std::endl;
	}
}

void outputTriangle(triangle Triangle)
{
	point firstVertex = Triangle.getFirstVertex();
	point secondVertex = Triangle.getSecondVertex();
	point thirdVertex = Triangle.getThirdVertex();
	
	std::cout << "First vertex:" << std::endl;
	firstVertex.printPoint();
	std::cout << "Second vertex:" << std::endl;
	secondVertex.printPoint();
	std::cout << "Third vertex:" << std::endl;
	thirdVertex.printPoint();
}
