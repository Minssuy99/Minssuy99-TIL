// 다형성

using System;

namespace ConsoleApp8
{
    public class Program
    {
        public class Unit
        {
            // virtual : 자식이 재정의 했을 수도 있다. 부모클래스 이지만 실제 형태는 다를 수 있다고 알림.
            public virtual void Move()
            {
                Console.WriteLine("두발로 걷기");
            }

            public void Attack()
            {
                Console.WriteLine("Unit 공격");
            }
        }

        public class Marine : Unit
        {

        }

        public class Zergling : Unit
        {
            public override void Move()     // 재정의를 했다고 override 를 해서 알림
            {
                Console.WriteLine("네발로 걷기");
            }
        }

        public static void Main8(string[] args)
        {
            Marine marine = new Marine();
            Console.WriteLine("마린의 특성");
            marine.Move();
            marine.Attack();

            Console.WriteLine();
            Console.WriteLine("저글링의 특성");
            Zergling zergling = new Zergling();
            zergling.Move();
            zergling.Attack();

            Console.WriteLine();
            Console.WriteLine("리스트로 불러와본다면..");

            // Unit은 참조, Marine 과 Zergling 은 실제 형태
            List<Unit> list = new List<Unit>();
            list.Add(new Marine());
            list.Add(new Zergling());

            foreach (Unit unit in list)
            {
                unit.Move();
            }

        }
    }
}
