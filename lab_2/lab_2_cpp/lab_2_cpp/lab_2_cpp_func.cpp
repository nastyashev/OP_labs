#include "lab_2_cpp_func.h"

char fileMode()
{
	char choice;
	cout << "Press [0] if you want to write the file from the beginning or [1] if you want to overwrite it: ";
	cin >> choice;
	while (choice != '0' && choice != '1') {
		cout << "Wrong! Please try again." << endl;
		cout << "Press [0] if you want to write the file from the beginning or [1] if you want to overwrite it: ";
		cin >> choice;
	}
	return choice;
}

void checkTime(int& hour, int& minute)
{
	while (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
		cout << "Wrong! Please try again." << endl;
		cout << "Time: "; cin >> hour; cin.get(); cin >> minute;
	}
}

int numOfRoutes()
{
	cout << "Enter the number of the routes: ";
	int num; cin >> num;
	while (num < 1) {
		cout << "Wrong! Please try again." << endl;
		cout << "Enter the number of the routes: "; cin >> num;
	}
	return num;
}

void inputFile(string filename)
{
	char choice = fileMode();
	ofstream file;
	if (choice == '0') {
		file.open(filename, ios::binary);
	}
	else if (choice == '1') {
		file.open(filename, ios::binary | ios::app);
	}

	
	if (!file.is_open()) {
		cout << "Failed to open file." << endl;
	}
	
	else {
		int num = numOfRoutes();
		timetable train;
		
		for (int i = 0; i < num; i++) {
			cout << "Route number: "; cin >> train.number;
			
			cout << "Route: ";
			string way;
			getline(cin, way); train.way = way; //need fix (program ignore getline)
			
			cout << "Departure time: ";
			cin >> train.departure_h; cin.get(); cin >> train.departure_m;
			checkTime(train.departure_h, train.departure_m);
			
			cout << "Arrival time: ";
			cin >> train.arrival_h; cin.get(); cin >> train.arrival_m;
			checkTime(train.arrival_h, train.arrival_m);

			file.write((char*)&train, sizeof(timetable));
		}
	}
	file.close();
}

void printTime(int hm)
{
	(hm < 10) ? (cout << "0" << hm) : (cout << hm);
}

void outputFile(string filename)
{
	ifstream file;
	file.open(filename, ios::binary);

	if (!file.is_open()) {
		cout << "Failed to open file." << endl;
	}
	else {
		timetable train;
		while (file.read((char*)&train, sizeof(timetable))) {
			cout << "----------------------------------------" << endl;
			cout << "Route number: " << train.number << endl;
			cout << "Route: " << train.way << endl;
			cout << "Departure time: ";
			printTime(train.departure_h); cout << ":"; printTime(train.departure_m); cout << endl;
			cout << "Arrival time: ";
			printTime(train.arrival_h); cout << ":"; printTime(train.arrival_m); cout << endl;
			cout << "----------------------------------------" << endl;
		}
	}
}

void makeNewFile(string filename, string newfilename)
{
	ifstream file;
	ofstream newfile;
	file.open(filename, ios::binary);
	newfile.open(newfilename, ios::binary);

	if (!file.is_open() && !newfile.is_open()) {
		cout << "Failed to open file." << endl;
	}
	else {
		timetable train;
		while (file.read((char*)&train, sizeof(timetable))) {
			if (train.departure_h < 10 || (train.departure_h == 10 && train.departure_m == 0) || train.departure_h >= 18) {
				newfile.write((char*)&train, sizeof(timetable));
			}
		}
	}
	
	file.close();
	newfile.close();
}
