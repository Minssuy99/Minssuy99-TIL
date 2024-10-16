using System;

namespace ConsoleAbstract
{
    abstract class Shape        // 추상 클래스.
    {
        public abstract void Draw(); // 선언만 하고 구현은 안했기 때문에 자식클래스에서 반드시 구현해줘야 함.
                                     // 메서드를 추상으로 정의하고싶다면, 클래스도 추상으로 선언해줘야함.
    }

    class Circle : Shape
    {
        public override void Draw()     // 자식 클래스에서 구현
        {
            Console.WriteLine("Drawing a Circle");
        }
    }

    class Square : Shape
    {
        public override void Draw()     // 자식 클래스에서 구현
        {
            Console.WriteLine("Drawing a Square");
        }
    }

    class Triangle : Shape
    {
        public override void Draw()     // 자식 클래스에서 구현
        {
            Console.WriteLine("Drawing a Triangle");
        }
    }

    public class Program
    {
        public static void MainAbstract(string[] args)
        {
            // Shape shape = new Shape();     <<  추상클래스는 인스턴스를 만들 수 없음.
            List<Shape> list = new List<Shape>();
            list.Add(new Circle());
            list.Add(new Triangle());
            list.Add(new Square());

            foreach (Shape shape in list)
            {
                shape.Draw();
            }

        }
    }
}