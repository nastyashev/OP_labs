from TFigure import *

class TPyramid(TFigure):
    
    __height = 0.0
    __apopheme = 0.0
    __base_side = 0.0

    def __init__(self, pyramid):
        self.__height = float(pyramid[0])
        self.__apopheme = float(pyramid[1])
        self.__base_side = float(pyramid[2])

    def find_surface_area(self):
        side_surface_area = 0.5 * (4 * self.__base_side) * self.__apopheme
        base_area = pow(self.__base_side, 2)
        return side_surface_area + base_area

    def find_volume(self):
        return (1/3.0) * pow(self.__base_side, 2) * self.__height