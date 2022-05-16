using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_5_cs
{
    internal static class Methods
    {
        public static int BiggestVolume(TCylinder[] cylinder)
        {
            int index = 0;
            double max = cylinder[index].FindVolume();
            for (int i = 0; i < cylinder.Length; i++)
            {
                if (cylinder[i].FindVolume() > max)
                {
                    max = cylinder[i].FindVolume();
                    index = i;
                }
            }
            return index;
        }

        public static int LeastSurfaceArea(TPyramid[] pyramid)
        {
            int index = 0;
            double min = pyramid[index].FindVolume();
            for (int i = 0; i < pyramid.Length; i++)
            {
                if (pyramid[i].FindVolume() < min)
                {
                    min = pyramid[i].FindVolume();
                    index = i;
                }
            }
            return index;
        }
    }
}
