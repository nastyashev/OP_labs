﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_5_cs
{
    class TPyramid : TFigure
    {
        private double _height;
        private double _apopheme;
        private double _baseSide;

        public TPyramid(double height, double apopheme, double baseSide)
        {
            _height = height;
            _apopheme = apopheme;
            _baseSide = baseSide;
        }

        public override double FindSurfaceArea()
        {
            double sideSurfaceArea = 0.5 * (4 * _baseSide) * _apopheme;
            double baseArea = Math.Pow(_baseSide, 2);
            return sideSurfaceArea + baseArea;
        }

        public override double FindVolume()
        {
            return (1 / 3.0) * Math.Pow(_baseSide, 2) * _height;
        }
    }
}