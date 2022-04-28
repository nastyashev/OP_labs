#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct timetable
{
	int number;
	string way;
	int departure_h;
	int departure_m;
	int arrival_h;
	int arrival_m;
};

void inputFile(string);
void outputFile(string);
void makeNewFile(string, string);