using System;
using System.Runtime.CompilerServices;

namespace ConsoleApp6
{
    class Person
    {
        // 필드
        public string Name;
        public int Age;

        /* 생성자를 정의하게 되면, default 생성자는 사라지기때문에
           default 생성자를 이용할 거라면 반드시 다시 선언해주도록 하자. */
        public Person()     // default 생성자   
        {
            Name = "Unknown";
            Age = 0;
        }

        public Person(string newName, int newAge)   // 매개변수를 받는 프로퍼티 생성자
        {
            Name = newName;
            Age = newAge;
        }


        // 메서드
        public void PrintInfo()
        {
            Console.WriteLine("Name: " + Name);
            Console.WriteLine("Age: " + Age);
        }
    }



    class OtherPerson
    {
        public string Name { get; set; }    // 프로퍼티
        public int Age { get; set; }    // set 은 값을 할당할 때, get 은 값을 반환할 때

        public OtherPerson()
        {
            Name = "Null";
            Age = 0;
        }
    }



    public class Program
    {
        public static void Main6(string[] args)
        {
            Person p = new Person();    // Person 클래스의 인스턴스 생성
            p.Name = "John";
            p.Age = 30;
            p.PrintInfo();  // 메서드 호출
            Console.WriteLine();

            Person person1 = new Person("Minseong", 25);
            person1.PrintInfo();

            OtherPerson myfriend = new OtherPerson();
            myfriend.Name = "Jihoon";   // set
            myfriend.Age = 25;      // set

            Console.WriteLine();
            Console.WriteLine($"My friend name is {myfriend.Name} and Age is {myfriend.Age}."); // get
        }
    }
}