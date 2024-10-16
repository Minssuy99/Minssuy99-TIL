using System;

namespace ConsoleAppInterface2
{
    public class Program
    {
        public interface Iusable
        {
            void Use();
        }

        public class Item : Iusable
        {
            public Item()
            {
                Name = "Null";
            }
            public string Name { get; set; }

            public void Use()
            {
                Console.WriteLine("아이템 {0} 을 사용했습니다.", Name);
            }
        }

        public class Player
        {
            public void UseItem(Iusable item)
            {
                item.Use();
            }
        }


        public static void MainInterface2(string[] args)
        {
            Player player = new Player();
            Item item = new Item() { Name = "Health Position" };
            player.UseItem(item);
        }
    }
}