from abc import ABC, abstractmethod

class TFigure(ABC):
    _Pi = 3.1416
    _height = 0.0

    @abstractmethod
    def find_surface_area(self):
        pass
    def find_volume(self):
        pass