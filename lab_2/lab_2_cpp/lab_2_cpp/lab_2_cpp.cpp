/*
32. Створити файл із розкладом руху приміських поїздів декількома напрямками (по кожному напрямку по 3-5 рейсів протягом дня):
номер рейсу, напрямок руху, час відправлення, час прибуття в кінцевий пункт.
Зі складеного розкладу сформувати зимовий розклад (новий файл), в якому мають бути лише ранкові (до 10:00) та вечірні (після 18:00) рейси.
*/

#include "lab_2_cpp_func.h"

int main()
{
    setlocale(LC_ALL, "");
    
    string fileName = "file2c.txt";
    string newFileName = "newfile2c.txt";

    inputFile(fileName);
    makeNewFile(fileName, newFileName);
    cout << "\nOriginal file:" << endl;
    outputFile(fileName);
    cout << "\nNew file:" << endl;
    outputFile(newFileName);

    system("pause");
    return 0;
}


