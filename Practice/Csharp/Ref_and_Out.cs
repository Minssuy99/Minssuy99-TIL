using System;

namespace ConsoleAppRefAndOut
{

    public class Program
    {
        static void Divied(int a, int b, out int quotient, out int remainder)
        {
            quotient = a / b;
            remainder = a % b;
        }

        static void Swap(ref int a, ref int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        public static void MainRefAndOut(string[] args)
        {
            int a, b;
            Divied(7, 3, out a, out b);     // out 키워드를 통해 여러반환값을 동시에 받을 수 있음.
            Console.WriteLine($"{a}, {b}");

            int x = 1, y = 2;
            Swap(ref x, ref y);     // x와 y 의 값을 참조를 통해 할당값을 메서드를 통해 바꿈.
            Console.WriteLine($"{x}, {y}");
        }
    }
}