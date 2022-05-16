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

        public TCylinder(double radius, double heigh)
        {
            _radius = radius;
            _height = heigh;
        }
        
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
