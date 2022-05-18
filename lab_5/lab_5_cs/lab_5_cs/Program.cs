using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Спроектувати клас TFigure, який представляє просторову геометричну фігуру з методами обчислення площі її поверхні та об’єму. 
На основі цього класу створити класи-нащадки TPyramid та TCylinder. Створити n пірамід і m циліндрів. 
Знайти циліндр з найбільшим об’ємом і піраміду – з найменшою площею поверхні.
 */


namespace lab_5_cs
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Кількість пірамід: ");
            int n = int.Parse(Console.ReadLine());
            n = Methods.CheckValue(n);
            TPyramid[] pyramids = new TPyramid[n];
            Methods.MakePyramidsArray(pyramids);
            
            Console.WriteLine("------------------------");
            
            Console.Write("Кількість циліндрів: ");
            int m = int.Parse(Console.ReadLine());
            m = Methods.CheckValue(m);
            TCylinder[] cylinders = new TCylinder[m];
            Methods.MakeCylinderArray(cylinders);

            int indC = Methods.BiggestVolume(cylinders);
            int indP = Methods.LeastSurfaceArea(pyramids);

            Console.WriteLine("\nЦиліндр з найбільшим об'ємом: {0}, об'єм = {1, 0:0.000}", indC + 1, cylinders[indC].FindVolume());
            Console.WriteLine("Піраміда з найменшою площою поверхні: {0}, площа поверхні = {1, 0:0.000}", indP + 1, pyramids[indP].FindSurfaceArea());
        }
    }
}
