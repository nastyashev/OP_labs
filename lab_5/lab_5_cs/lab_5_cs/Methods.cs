using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_5_cs
{
    internal static class Methods
    {
        public static int BiggestVolume(TCylinder[] cylinders)
        {
            int index = 0;
            double max = cylinders[index].FindVolume();
            for (int i = 0; i < cylinders.Length; i++)
            {
                if (cylinders[i].FindVolume() > max)
                {
                    max = cylinders[i].FindVolume();
                    index = i;
                }
            }
            return index;
        }

        public static int LeastSurfaceArea(TPyramid[] pyramids)
        {
            int index = 0;
            double min = pyramids[index].FindVolume();
            for (int i = 0; i < pyramids.Length; i++)
            {
                if (pyramids[i].FindVolume() < min)
                {
                    min = pyramids[i].FindVolume();
                    index = i;
                }
            }
            return index;
        }

        public static void MakePyramidsArray(TPyramid[] pyramids)
        {         
            for (int i = 0; i < pyramids.Length; i++)
            {
                do
                {
                    Console.WriteLine($"\n{i + 1} піраміда:");

                    pyramids[i] = new TPyramid();

                    Console.Write("Висота піраміди: ");
                    double height = double.Parse(Console.ReadLine());
                    height = CheckValue(height);
                    pyramids[i].Height = height;

                    Console.Write("Апофема: ");
                    double apopheme = double.Parse(Console.ReadLine());
                    apopheme = CheckValue(apopheme);
                    pyramids[i].Apopheme = apopheme;

                    Console.Write("Сторорна основи: ");
                    double baseSide = double.Parse(Console.ReadLine());
                    baseSide = CheckValue(baseSide);
                    pyramids[i].BaseSide = baseSide;

                    if (!pyramids[i].CheckData())
                    {
                        Console.WriteLine("-----Некоректні дані! Спробуйте знову.-----");
                    }
                }
                while (!pyramids[i].CheckData());
            }
        }

        public static void MakeCylinderArray(TCylinder[] cylinders)
        {
            for (int i = 0; i < cylinders.Length; i++)
            {
                Console.WriteLine($"\n{i + 1} циліндр:");

                cylinders[i] = new TCylinder();
                
                Console.Write("Радіус: ");
                double radius = double.Parse(Console.ReadLine());
                radius = CheckValue(radius);
                cylinders[i].Radius = radius;

                Console.Write("Висота циліндра: ");
                double height = double.Parse(Console.ReadLine());
                height = CheckValue(height);
                cylinders[i].Height = height;
            }
        }

        public static double CheckValue(double value)
        {
            while(value < 0)
            {
                Console.WriteLine("Неправильно! Число має бути > 0");
                Console.Write("Спробуйте ще раз: ");
                value = double.Parse(Console.ReadLine());
            }
            return value;
        }
    }
}
