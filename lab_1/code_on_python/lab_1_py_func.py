def inputFile(fileName):
    choice = input('Натисніть 0, якщо хочете записати файл з початку або 1, якщо хочете дозаписати його: ')
    if choice == '0':
        file = open(fileName, 'w')
    elif choice == '1':
        file = open(fileName, 'a')
    line = input('Введіть текст. Для закінчення запису рядка натисніть enter, тексту - ctrl + x\n')
    endFile = chr(24)
    while line[0] != endFile:
        file.write(line + '\n')
        line = input()
    file.close()

def outputFile(fileName):
    file = open(fileName, 'r')
    print(file.read())
    file.close()

def makeNewFile(fileName, newFileName):
    word = input('Введіть слово: ')
    file = open(fileName, 'r')
    newfile = open(newFileName, 'w')
    for line in file:
        position = line.find(word)
        if position != -1:
            newfile.write(line + '\n')
    file.close()
    newfile.close()

import os
def fileSize(fileName):
    size = os.stat(fileName)
    return size.st_size

from os.path import getctime
from time import ctime
def timeFile(fileName):
    print('Дата та час створення файлу - ', ctime(getctime(fileName)))