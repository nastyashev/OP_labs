using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_5_cs
{
    class TCylinder : TFigure
    {
        private double _radius;
        private double _height;

        public double Radius {set { _radius = value; } }
        public double Height {set { _height = value; } }

        public void SetRadius(double radius) { _radius = radius; }
        public void SetHeight(double height) { _height = height; }

        public override double FindSurfaceArea()
        {
            double sideSurfaceArea = 2 * Math.PI * _radius * _height;
            double baseArea = Math.PI * Math.Pow(_radius, 2);
            return sideSurfaceArea + baseArea;
        }

        public override double FindVolume()
        {
            return Math.PI * Math.Pow(_radius, 2) * _height;
        }
    }
}
