using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_6
{
    internal class Tree
    {
        public TNode Root { get; set; }

        public Tree() { Root = null; }

        public void Add(double numder)
        {
            if (Root == null)
            {
                Root = new TNode(numder);
            }
            
            else
            {
                TNode node = Root;
                while (true)
                {
                    if (numder < node.Number)
                    {
                        if (node.Left != null)
                            node = node.Left;
                        else
                        {
                            node.Left = new TNode(numder, node);
                            break;
                        }
                    }

                    else
                    {
                        if (node.Right != null)
                            node = node.Right;
                        else
                        {
                            node.Right = new TNode(numder, node);
                            break;
                        }
                    }
                }
            }
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

        public void Print(int x, int y, TNode root, int delta = 0)
        {
            if (root != null)
            {
                if (delta == 0)
                    delta = x / 2;
                Console.SetCursorPosition(x, y);
                Console.Write(root.Number);
                Print(x - delta, y + 3, root.Left, delta / 2);
                Print(x + delta, y + 3, root.Right, delta / 2);
            }
        }
    }
}
