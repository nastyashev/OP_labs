from lab_2_py_functions import *

filename = 'file2p.txt'
newfilename = 'newfile2p.txt'

inputFile(filename)
makeNewFile(filename, newfilename)
print('\nOriginal file:')
outputFile(filename)
print('\nNew file:')
outputFile(newfilename)
