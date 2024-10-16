using System;

namespace ConsoleAppInterface1
{
    public interface Imovable
    {
        void Move(int x, int y);
    }

    public class Player : Imovable
    {
        public void Move(int x, int y)
        {
            // 기능구현
        }
    }

    public class Enemy : Imovable
    {
        public void Move(int x, int y)
        {
            // 기능구현
        }
    }

    public class Program
    {
        public static void MainInterface1(string[] args)
        {
            Imovable movableObject1 = new Player();
            Imovable movableObject2 = new Enemy();

            movableObject1.Move(1, 2);
            movableObject1.Move(2, 3);

        }
    }
}