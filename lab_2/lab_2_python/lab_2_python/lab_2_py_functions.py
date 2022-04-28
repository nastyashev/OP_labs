import pickle

timetable = {
    "number": 0,
    "way": "",
    "departure_h": 0,
    "departure_m": 0,
    "arrival_h": 0,
    "arrival_m": 0
    }

def fileMode():
    choice = input('Press [0] if you want to write the file from the beginning or [1] if you want to overwrite it: ')
    while choice != '0' and choice != '1':
        print('Wrong! Please try again.')
        choice = input('Press [0] if you want to write the file from the beginning or [1] if you want to overwrite it: ')
    return choice

def checkTime(hour, minute):
    while(hour < 0 or hour > 23 or minute < 0 or minute > 59):
        print('Wrong! Please try again.')
        time = input('Time: ')
        hour = int(time[:2])
        minute = int(time[3:])
    return hour, minute

def inputFile(filename):
    choice = fileMode()
    if choice == '0':
        file = open(filename, 'wb')
    elif choice == '1':
        file = open(filename, 'ab')
    
    num = int(input('Enter the number of the routes: '))
    while num < 1:
        print('Wrong! Please try again.')
        num = int(input('Enter the number of the routes: '))

    for i in range(num):
        timetable["number"] = int(input('Route number: '))
        
        timetable["way"] = input('Route: ')
        
        departure = input('Departure time: ') 
        timetable["departure_h"] = int(departure[:2]) 
        timetable["departure_m"] = int(departure[3:])
        timetable["departure_h"], timetable["departure_m"] = checkTime(timetable["departure_h"], timetable["departure_m"])
        
        arrival = input('Arrival time: ')
        timetable["arrival_h"] = int(arrival[:2]) 
        timetable["arrival_m"] = int(arrival[3:])
        timetable["arrival_h"], timetable["arrival_m"] = checkTime(timetable["arrival_h"], timetable["arrival_m"])
        

        pickle.dump(timetable, file)
    file.close()

def printTime(hm):
    hmStr = str(hm)
    if hm < 10:
        return '0' + hmStr
    else:
        return hmStr

def outputFile(filename):
    file = open(filename, "rb")
    size = file.seek(0, 2)
    file.seek(0)
    
    while file.tell() < size:
        timetable = pickle.load(file)
        print("----------------------------------------")
        print('Route number:', timetable["number"])
        print('Route:', timetable["way"])
        print('Departure time: ' + printTime(timetable["departure_h"]) + ':' + printTime(timetable["departure_m"]))
        print('Arrival time: ' + printTime(timetable["arrival_h"]) + ':' + printTime(timetable["arrival_m"]))
        print("----------------------------------------")

    file.close()

def makeNewFile(filename, newfilename):
    file = open(filename, "rb")
    newfile  = open(newfilename, "wb")
    size = file.seek(0, 2)
    file.seek(0)

    while file.tell() < size:
        timetable = pickle.load(file)
        if timetable["departure_h"] < 10 or (timetable["departure_h"] == 10 and timetable["departure_m"] == 0) or timetable["departure_h"] >=18:
            pickle.dump(timetable, newfile)

    file.close()
    newfile.close()