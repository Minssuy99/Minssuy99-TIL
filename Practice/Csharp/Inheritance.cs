using System;

namespace ConsoleApp7
{
    // 부모 클래스
    public class Animal
    {
        public Animal()
        {
            Name = "Unknown";
            Age = 0;
        }

        public string Name { get; set; }
        public int Age { get; set; }

        public void Eat()
        {
            Console.WriteLine("Animal is eating.");
        }

        public void Sleep()
        {
            Console.WriteLine("Animal is sleeping.");
        }
    }

    // 자식 클래스
    public class Dog : Animal
    {
        public void Bark()
        {
            Console.WriteLine($"{Name} is Bark");
        }
    }

    public class Cat : Animal
    {
        public void Meow()
        {
            Console.WriteLine($"{Name} is Meow");
        }

        // 부모클래스의 sleep 메서드가 숨김처리 하고 재정의함.  좋은 구현방식은 아님.
        public void Sleep() // 경고표시가 뜨고있음
        {
            Console.WriteLine("jazz jazz sleep jazz");
        }
    }

    public class Program
    {
        public static void MainInheritance(string[] args)
        {
            Dog Lofi = new Dog();
            Lofi.Name = "Lofi";
            Lofi.Age = 3;
            Lofi.Bark();
            Lofi.Sleep();

            Cat Jazz = new Cat();
            Jazz.Name = "Jazz";
            Jazz.Age = 3;
            Jazz.Meow();
            Jazz.Sleep();

        }
    }
}