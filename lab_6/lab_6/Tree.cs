using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_6
{
    internal class Tree
    {
        public Tree() { Root = null; }
        
        public TNode Root { get; set; }

        private static TNode Add(double number, TNode node)
        {
            if (node == null)
                return new TNode(number);
            else
            {
                if (number < node.Number)
                    node.Left = Add(number, node.Left);
                else
                    node.Right = Add(number, node.Right);
            }
            return node;
        }

        public void Add(double number)
        {
            Root = Add(number, Root);
        }

        private int CountElements(TNode root)
        {
            if (root == null)
            {
                return 0;
            }

            else
            {
                int count = 0;
                count += CountElements(root.Left);
                count += CountElements(root.Right);
                return ++count;
            }
        }

        private double SumElements(TNode root)
        {
            if (root == null)
            {
                return 0;
            }

            else
            {
                double count = 0;
                count += SumElements(root.Left);
                count += SumElements(root.Right);
                return count + root.Number;
            }
        }

        public double ArithmeticMean()
        {
            return SumElements(Root) / CountElements(Root);
        }

        private void Print(TNode node, string indent = "", string side = "")
        {
            if (node == null) return;
            
            if (node != null)
            {
                Console.WriteLine($"{indent} [{side}] {node.Number}");
                indent += new string(' ', 3);

                Print(node.Left, indent, "L");
                Print(node.Right, indent, "R");
            }
        }

        public void Print()
        {
            Print(Root);
        }
    }
}
