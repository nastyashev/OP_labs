#include "lab_1_cpp_func.h"

int main()
{
    setlocale(LC_ALL, "");

    char fileName[] = "file1.txt";
    char newFileName[] = "newfile1.txt";

    inputFile(fileName);
    makeNewFile(fileName, newFileName);
    cout << "\nПочатковий файл:" << endl;
    outputFile(fileName);
    cout << "\nСтворений файл:" << endl;

    outputFile(newFileName);
    int fsize = fileSize(newFileName);
    cout << "\nРозмір нового файлу: " << fsize;

    return 0;
}


