from TFigure import *

class TCylinder(TFigure):
    
    __radius = 0.0

    def __init__(self, cylinder):
        self.__radius = float(cylinder[0])
        self._height = float(cylinder[1])

    def find_surface_area(self):
        side_surface_area = 2 * self._Pi * self.__radius * self._height
        base_area = self._Pi * pow(self.__radius, 2)
        return side_surface_area + base_area

    def find_volume(self):
        return self._Pi * pow(self.__radius, 2) * self._height