#include "text.h"

void text::inputText()
{
	string line;
	char endText = 24;
	cout << "Введіть текст. Для закінчення запису рядка натисніть enter, тексту - ctrl + x." << endl;

	getline(cin, line);
	while (line[0] != endText) {
		lines.push_back(line);
		getline(cin, line);
	}
}

void text::outputText()
{
	for (int i = 0; i < lines.size(); i++)
	{
		cout << lines[i];
	}
}

double text::digitPercent()
{
	int symbols = GetSizeText();
	int digits = 0;
	for (int i = 0; i < lines.size(); i++)
	{
		for (int j = 0; j < lines[i].size(); j++)
		{
			if (isdigit(lines[i][j])) {
				digits++;
			}
		}
	}
	double digitpercent = (digits / symbols) * 100;
	return digitpercent;
}

int text::GetSizeText()
{
	for (int i = 0; i < lines.size(); i++)
	{
		for (int j = 0; j < lines[i].size(); j++)
		{
			sizeText++;
		}
	}	
	return sizeText;
}

void inputArr(vector<text> arr)
{
	cout << "Введіть кількість текстів: ";
	int num; cin >> num;
	while (num < 1) {
		cout << "Неправильно! Повторіть спробу." << endl;
		cout << "Введіть кількість текстів: "; cin >> num;
	}
	for (int i = 0; i < num; i++)
	{
		text Text;
		Text.inputText();
		arr.push_back(Text);
	}
}

