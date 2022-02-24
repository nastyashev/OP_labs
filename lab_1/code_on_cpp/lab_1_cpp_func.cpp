#include "lab_1_cpp_func.h"

void makeNewFile(char* fileName, char* newFileName)
{
	string word;
	cout << "Введіть слово: ";
	getline(cin, word);

	ifstream file;
	ofstream newfile;
	file.open(fileName);
	newfile.open(newFileName);

	if (!file.is_open() && !newfile.is_open()) {
		cout << "Не вдалося відкрити файл." << endl;
	}
	else {
		string line;
		while (!file.eof()) {
			getline(file, line);
			int position = line.find(word);
			if (position != string::npos)
				newfile << line << endl;
		}
	}
	file.close();
	newfile.close();
}

void inputFile(char* fileName)
{
	char choice;
	cout << "Натисніть 0, якщо хочете записати файл з початку або 1, якщо хочете дозаписати його: ";
	cin >> choice;

	ofstream file;
	if (choice == '0') {
		file.open(fileName);
	}
	else if (choice == '1') {
		file.open(fileName, ofstream::app);
	}
	
	if (!file.is_open()) {
		cout << "Не вдалося відкрити файл." << endl;
	}
	else {
		cout << "Введіть текст. Для закінчення запису рядка натисніть enter, тексту - ctrl + x" << endl;
		string line;
		char endFile = 24;
		getline(cin, line);
		while (line[0] != endFile) {
			file << line << endl;
			getline(cin, line);
		}
	}
	file.close();
}

int fileSize(char* newFileName)
{
	ifstream file;
	file.open(newFileName);
	int size = 0;

	if (!file.is_open()) {
		cout << "Не вдалося відкрити файл." << endl;
	}
	else {
		while (!file.eof()) {
			file.get();
			size++;
		}
	}
	file.close();
	return size;
}

void outputFile(char* fileName)
{
	ifstream file;
	file.open(fileName);

	if (!file.is_open()) {
		cout << "Не вдалося відкрити файл." << endl;
	}
	else {
		string line;
		while (!file.eof()) {
			getline(file, line);
			cout << line << endl;
		}
	}
	file.close();
}