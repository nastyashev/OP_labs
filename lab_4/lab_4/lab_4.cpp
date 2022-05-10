/*
Визначити клас «Трикутник», членами якого є координати вершин трикутника в просторі. 
Реалізувати для нього декілька конструкторів, геттери, методи обчислення периметра трикутника. 
Перевантажити оператори: префіксний «++» / постфіксний «++» - для інкрементування 
усіх х-координат і усіх у-координат вершин трикутника відповідно, 
«+=» - для збільшення усіх координат вершин трикутника на вказану величину. 
Створити три трикутника (Т1, Т2, Т3), використовуючи різні конструктори. 
Інкрементувати х-координати вершин трикутника Т1 і у-координати вершин трикутника Т2. 
Збільшити координати вершин трикутника Т3 на вказану величину. 
Серед трикутників Т1, Т2, Т3 визначити трикутник, що має найбільший периметр.
*/

#include "triangle.h"
#include "point.h"

int main()
{
    triangle T1;
    
    std::cout << "Enter the vertices of triangle T2." << std::endl;
    std::cout << "Enter first vertex:" << std::endl;
    point vertex1; vertex1.inputPoint();
    std::cout << "Enter second vertex:" << std::endl;
    point vertex2; vertex2.inputPoint();
    std::cout << "Enter third vertex:" << std::endl;
    point vertex3; vertex3.inputPoint();
    triangle T2(vertex1, vertex2, vertex3);

    std::cout << "Enter first vertex of triangle T3:" << std::endl;
    point vertexT3; vertexT3.inputPoint();
    triangle T3(vertexT3);

    std::cout << "number = ";
    double number; std::cin >> number;

    std::cout << "\n------Original triangles------" << std::endl;
    std::cout << "T1: " << std::endl; outputTriangle(T1);
    std::cout << "T2: " << std::endl; outputTriangle(T2);
    std::cout << "T3: " << std::endl; outputTriangle(T3);
    std::cout << "------------------------------" << std::endl;

    ++T1;
    T2++;
    T3 += number;

    std::cout << "\n-------Changed triangles-------" << std::endl;
    std::cout << "T1: " << std::endl; outputTriangle(T1);
    std::cout << "T2: " << std:: endl; outputTriangle(T2);
    std::cout << "T3: " << std::endl; outputTriangle(T3);
    std::cout << "-------------------------------" << std::endl;

    largestPerimetr(T1, T2, T3);
    
    return 0;
}

