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

int main()
{
    triangle T1;
    
    cout << "Enter the vertices of triangle T2." << endl;
    cout << "Enter first vertex:" << endl;
    vector<double> vertex1 = inputVertex();
    cout << "Enter second vertex:" << endl;
    vector<double> vertex2 = inputVertex();
    cout << "Enter third vertex:" << endl;
    vector<double> vertex3 = inputVertex();
    triangle T2(vertex1, vertex2, vertex3);

    cout << "Enter first vertex of triangle T3:" << endl;
    vector<double> vertexT3 = inputVertex();
    triangle T3(vertexT3);

    cout << "number = ";
    double number; cin >> number;

    cout << "\n------Original triangles------" << endl;
    cout << "T1: " << endl; T1.outputTriangle();
    cout << "T2: " << endl; T2.outputTriangle();
    cout << "T3: " << endl; T3.outputTriangle();
    cout << "------------------------------" << endl;

    ++T1;
    T2++;
    T3 += number;

    cout << "\n-------Changed triangles-------" << endl;
    cout << "T1: " << endl; T1.outputTriangle();
    cout << "T2: " << endl; T2.outputTriangle();
    cout << "T3: " << endl; T3.outputTriangle();
    cout << "-------------------------------" << endl;

    largestPerimetr(T1, T2, T3);
    
    return 0;
}

