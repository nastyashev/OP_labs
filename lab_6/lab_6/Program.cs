using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * Побудувати дерево, елементами якого є дійсні числа. Обчислити середнє арифметичне усіх його елементів.
 */

namespace lab_6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Tree tree = new Tree();
            
            Console.Write("Кількість елементів дерева: ");
            int num = int.Parse(Console.ReadLine());
            while (num < 0)
            {
                Console.Write("Кількість елементів дерева: ");
                num = int.Parse(Console.ReadLine());
            }

            for (int i = 0; i < num; i++)
            {
                Console.Write("Число: ");
                tree.Add(double.Parse(Console.ReadLine()));
            }

            Console.WriteLine("\nСереднє арифметичне усіх елементів дерева = {0, 0:0.###}", tree.ArithmeticMean());
            Console.WriteLine("Дерево:");
            tree.Print();

            Console.ReadKey();
        }
    }
}
