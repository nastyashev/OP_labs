#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <windows.h>
using namespace std;

class text
{
private:
	vector<wstring> lines;
	int sizeText = 0;
public:
	void inputText();
	void outputText();
	double digitPercent();
};

void inputArr(vector<text>&);
int getIndexLeastDigitPercent(vector<text>&);
