#include "text.h"

void text::inputText()
{
	wstring line;
	char endText = 24;
	cout << "Enter text. To finish writing a line, press [enter], the text - [enter] then [ctrl + x]." << endl;

	getline(wcin, line);
	while (line[0] != endText) {
		lines.push_back(line);
		getline(wcin, line);
	}
}

void text::outputText()
{
	for (int i = 0; i < lines.size(); i++)
	{
		wcout << lines[i] << endl;
	}
}

double text::digitPercent()
{
	int symbols = 0;
	double digits = 0;
	for (int i = 0; i < lines.size(); i++)
	{
		for (int j = 0; j < lines[i].size(); j++)
		{
			symbols++;
			if (isdigit(lines[i][j])) {
				digits++;
			}
		}
	}
	double digitpercent = (digits / symbols) * 100;
	return digitpercent;
}

void inputArr(vector<text> &arr)
{
	cout << "Enter the number of texts: ";
	int num; cin >> num;
	while (num < 1) {
		cout << "Wrong! Please try again." << endl;
		cout << "ВEnter the number of texts: "; cin >> num;
	}
	for (int i = 0; i < num; i++)
	{
		text Text;
		Text.inputText();
		arr.push_back(Text);
	}
}

int getIndexLeastDigitPercent(vector<text> &arr)
{
	int index = 0;
	double min_percent = arr[0].digitPercent();

	for (int i = 0; i < arr.size(); i++)
	{
		if (min_percent > arr[i].digitPercent()) 
		{
			min_percent = arr[i].digitPercent();
			index = i;
		}
	}
	return index;
}