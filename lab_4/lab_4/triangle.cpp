#include "triangle.h"

//class constructors

triangle::triangle()
{
	firstVertex = { 0, 0, 0 };
	secondVertex = { 1, 1, 1 };
	thirdVertex = { 2, 2, 2 };
}

triangle::triangle(vector<double>& firstVertex, vector<double>& secondVertex, vector<double>& thirdVertex)
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

triangle::triangle(vector<double>& firstVertex)
{
	this->firstVertex = firstVertex;
	secondVertex = { 0, 1, 2 };
	thirdVertex = { 1, 2, 3 };
}

//getters

vector<double> triangle::getFirstVertex()
{
	return firstVertex;
}

vector<double> triangle::getSecondVertex()
{
	return secondVertex;
}

vector<double> triangle::getThirdVertex()
{
	return thirdVertex;
}

//operator overload

triangle& triangle::operator++()
{
	this->firstVertex[0]++;
	this->secondVertex[0]++;
	this->thirdVertex[0]++;
	return *this;
}

triangle& triangle::operator++(int a)
{
	this->firstVertex[1]++;
	this->secondVertex[1]++;
	this->thirdVertex[1]++;
	return *this;
}

triangle& triangle::operator+=(double number)
{
	for (int i = 0; i < firstVertex.size(); i++)
	{
		firstVertex[i] += number;
	}
	for (int i = 0; i < secondVertex.size(); i++)
	{
		secondVertex[i] += number;
	}
	for (int i = 0; i < thirdVertex.size(); i++)
	{
		thirdVertex[i] += number;
	}
	return *this;
}

//other class methods

double triangle::perimetr()
{
	double x1 = firstVertex[0];
	double y1 = firstVertex[1];
	double z1 = firstVertex[2];
	
	double x2 = secondVertex[0];
	double y2 = secondVertex[1];
	double z2 = secondVertex[2];

	double x3 = thirdVertex[0];
	double y3 = thirdVertex[1];
	double z3 = thirdVertex[2];

	double side1 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2) + pow((z1 - z2), 2));
	double side2 = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2) + pow((z2 - z3), 2));
	double side3 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2) + pow((z3 - z1), 2));

	double P = side1 + side2 + side3;
	return P;
}

void triangle::outputTriangle()
{
	cout << "First vertex:" << endl;
	cout << "x = " << firstVertex[0] << "\ty = " << firstVertex[1] << "\tz = " << firstVertex[2] << endl;
	cout << "Second vertex:" << endl;
	cout << "x = " << secondVertex[0] << "\ty = " << secondVertex[1] << "\tz = " << secondVertex[2] << endl;
	cout << "Third vertex:" << endl;
	cout << "x = " << thirdVertex[0] << "\ty = " << thirdVertex[1] << "\tz = " << thirdVertex[2] << endl;
}

//functions

vector<double> inputVertex()
{
	vector<double> vertex(3);
	cout << "x = "; cin >> vertex[0];
	cout << "y = "; cin >> vertex[1];
	cout << "z = "; cin >> vertex[2];
	return vertex;
}

void largestPerimetr(triangle T1, triangle T2, triangle T3)
{
	double P1 = T1.perimetr();
	double P2 = T2.perimetr();
	double P3 = T3.perimetr();

	if (P1 > P2) {
		if (P1 > P3) {
			cout << "T1 has the largest perimetr: " << P1 << endl;
		}
		else {
			cout << "T3 has the largest perimetr: " << P3 << endl;
		}
	}
	else if (P2 > P3) {
		cout << "T2 has the largest perimetr: " << P2 << endl;
	}
	else {
		cout << "T31 has the largest perimetr: " << P3 << endl;
	}
}