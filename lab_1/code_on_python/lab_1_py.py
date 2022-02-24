from lab_1_py_func import *

fileName = 'file2.txt'
newFileName = 'newfile2'

inputFile(fileName)
makeNewFile(fileName, newFileName)
print('\nПочатковий файл:')
outputFile(fileName)
print('\nСтворений файл:')
outputFile(newFileName)

size = fileSize(newFileName)
print(f'Розмір створеного файлу - {size}')
timeFile(newFileName)
