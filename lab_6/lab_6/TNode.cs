using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_6
{
    internal class TNode
    {
        public TNode(double number)
        {
            Number = number;
            Left = null;
            Right = null;
        }

        public double Number { get; set; }
        public TNode Left { get; set; }
        public TNode Right { get; set; }
    }
}
