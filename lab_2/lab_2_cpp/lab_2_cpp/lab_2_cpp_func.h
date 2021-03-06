#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#define LEN_STR 100

struct timetable
{
	int number;
	char way[LEN_STR];
	int departure_h;
	int departure_m;
	int arrival_h;
	int arrival_m;
};

char fileMode();
void checkTime(int&, int&);
int numOfRoutes();
void inputFile(string);
void printTime(int);
void outputFile(string);
void makeNewFile(string, string);