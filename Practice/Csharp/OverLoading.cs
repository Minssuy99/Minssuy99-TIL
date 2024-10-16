using System;

namespace ConsoleApp4
{
    public class Program
    {
        static int Addnumbers(int a, int b)
        {
            return a + b;
        }

        static float Addnumbers(float a, float b)
        {
            return a + b;
        }

        static int Addnumbers(int a, int b, int c)
        {
            return a + b + c;
        }



        public static void Main4(string[] args)
        {
            int sum1 = Addnumbers(10, 20);
            float sum2 = Addnumbers(10.5f, 21.5f);
            int sum3 = Addnumbers(10, 20, 30);
        }
    }
}