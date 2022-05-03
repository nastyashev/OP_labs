/*
32. Розробити клас, який є абстракцією тексту та підтримує операції додавання рядка до тексту і 
визначення відсотка символів-цифр у тексті.
Створити масив об’єктів даного класу. Доповнити декілька текстів новими рядками. 
Визначити текст з найменшим відсотком символів-цифр.
*/

#include "text.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	vector<text> textArr;
    inputArr(textArr);

	int ind = getIndexLeastDigitPercent(textArr);
	cout << "\nText with the least percentage of digits:" << endl;
	textArr[ind].outputText();
	cout << "\npercentage of digits: " << setw(3) << setprecision(3) << textArr[ind].digitPercent() << "%" << endl;
    
    return 0;
}
