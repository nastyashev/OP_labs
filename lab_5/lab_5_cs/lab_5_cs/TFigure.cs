using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_5_cs
{
    abstract class TFigure
    {
        protected double _height;
        public double Height { set { _height = value; } }
        public abstract double FindSurfaceArea();
        public abstract double FindVolume();
    }
}
