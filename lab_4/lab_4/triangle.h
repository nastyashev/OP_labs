#pragma once
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class triangle
{
private:
	vector<double> firstVertex;
	vector<double> secondVertex;
	vector<double> thirdVertex;
public:
	triangle();
	triangle(vector<double>&, vector<double>&, vector<double>&);
	triangle(const triangle&);
	triangle(vector<double>&);

	vector<double> getFirstVertex();
	vector<double> getSecondVertex();
	vector<double> getThirdVertex();

	triangle& operator ++();
	triangle& operator ++(int);
	triangle& operator +=(double);

	double perimetr();
	void outputTriangle();
};

vector<double> inputVertex();
void largestPerimetr(triangle, triangle, triangle);