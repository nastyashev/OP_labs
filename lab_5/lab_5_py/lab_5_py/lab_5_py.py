#Спроектувати клас TFigure, який представляє просторову геометричну фігуру з методами обчислення площі її поверхні та об’єму. 
#На основі цього класу створити класи-нащадки TPyramid та TCylinder. Створити n пірамід і m циліндрів. 
#Знайти циліндр з найбільшим об’ємом і піраміду – з найменшою площею поверхні.

from methods import *

n = int(input("Кількість пірамід: "))
n = int(check_value(n))
pyramids = []
pyramids = make_pyramids_array(pyramids, n)

print("------------------------")

m = int(input("Кількість циліндрів: "))
m = int(check_value(m))
cylinders = []
cylinders = make_cylinder_array(cylinders, m)

ind_c = biggest_volume(cylinders)
ind_p = least_surface_area(pyramids)

print("\nЦиліндр з найбільшим об'ємом: {0}, об'єм = {1:10.3f}".format(ind_c+1, cylinders[ind_c].find_volume()))
print("Піраміда з найменшою площою поверхні: {0}, площа поверхні = {1:10.3f}".format(ind_p + 1, pyramids[ind_p].find_surface_area()))
