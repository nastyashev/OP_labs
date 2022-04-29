#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
using namespace std;

class text
{
private:
	vector<string> lines;
	int sizeText;
public:
	void inputText();
	void outputText();
	double digitPercent();
	int GetSizeText();
};

void inputArr(vector<text>);
