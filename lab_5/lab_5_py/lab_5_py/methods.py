from TPyramid import *
from TCylinder import *

def biggest_volume(cylinders):
    index = 0
    maximum = cylinders[index].find_volume()
    for i in range(len(cylinders)):
        if (cylinders[i].find_volume() > maximum):
            maximum = cylinders[i].find_volume()
            index = i
    return index

def least_surface_area(pyramids):
    index = 0
    minimum = pyramids[index].find_volume()
    for i in range(len(pyramids)):
        if (pyramids[i].find_volume() < minimum):
            minimum = pyramids[i].find_volume()
            index = i
    return index

def check_value(value):
    while value < 0:
        print("Неправильно! Число має бути > 0")
        value = float(input("Спробуйте ще раз: "))
    return value

def make_pyramids_array(pyramids, size):
    for i in range(size):
        while True:
            print(f"\n{i + 1} піраміда:")
            pyramid = []
        
            height = float(input("Висота піраміди: "))
            height = check_value(height)
            pyramid.append(height)

            apopheme = float(input("Апофема: "))
            apopheme = check_value(apopheme)
            pyramid.append(apopheme)

            base_side = float(input("Сторорна основи: "))
            base_side = check_value(base_side)
            pyramid.append(base_side)

            pyramids.append(TPyramid(pyramid))
            if pyramids[i].check_data() == False:
                print("-----Некоректні дані! Спробуйте знову.-----")
            if pyramids[i].check_data() == True:
                break
    
    return pyramids

def make_cylinder_array(cylinders, size):
    for i in range(size):
        print(f"\n{i + 1} циліндр:")
        cylinder = []

        radius = float(input("Радіус: "))
        radius = check_value(radius)
        cylinder.append(radius)

        height = float(input("Висота циліндра: "))
        height = check_value(height)
        cylinder.append(height)

        cylinders.append(TCylinder(cylinder))
    return cylinders