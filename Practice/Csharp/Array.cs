using System;

namespace ConsoleApp1
{
    public class Program
    {
        public static void Main1(string[] args)
        {
            int[] array1 = new int[5]; // 크기가 5인 int형 배열 선언
            string[] array2 = new string[3]; // 크기가 3인 int형 배열 선언
            int num = 0;

            array1[0] = 1;
            array1[1] = 2;
            array1[2] = 3;

            num = array1[0];

            Console.WriteLine($"{array1[0]}");
            Console.WriteLine();
            /*********************************************************************************/

            int[] itemPrices = { 100, 200, 300, 400, 500 };
            int totalPrice = 0;

            for (int i = 0; i < itemPrices.Length; i++)
            {
                totalPrice += itemPrices[i];
            }

            Console.WriteLine($"{totalPrice}");
            Console.WriteLine();

            /*********************************************************************************/

            // 능력치를 랜덤으로 생성
            Random rand = new Random();
            int[] playerStats = new int[4]; // 크기가 4인 int형 배열 선언
            for (int i = 0; i < playerStats.Length; i++)
            {
                playerStats[i] = rand.Next(1, 11);  // 1이상 10이하의 숫자를 랜덤으로 할당 (11은 포함x)
            }

            Console.WriteLine("플레이어의 공격력: " + playerStats[0]);
            Console.WriteLine("플레이어의 방어력: " + playerStats[1]);
            Console.WriteLine("플레이어의 체  력: " + playerStats[2]);
            Console.WriteLine("플레이어의 스피드: " + playerStats[3]);

            /*********************************************************************************/

            int[] scores = new int[5];

            for (int i = 0; i < scores.Length; i++)
            {
                Console.Write("학생 " + (i + 1) + " 의 성적을 입력하세요 : ");
                scores[i] = int.Parse(Console.ReadLine()); // 입력을 int 형으로 변환 후 배열 i에 할당
            }

            int sum = 0;
            for (int i = 0; i < scores.Length; i++)
            {
                sum += scores[i];
            }

            double average = (double)sum / scores.Length;
            Console.WriteLine("성적 평균은 " + average + " 입니다.");

            /*********************************************************************************/
            Random random = new Random(); // 랜덤 객체 생성
            int[] numbers = new int[3]; // 3개의 랜덤할 숫자를 저장할 배열

            for (int i = 0; i < numbers.Length; i++)
            {
                numbers[i] = random.Next(1, 10); // 1이상 9이하의 숫자
            }


            int attempt = 0;    //시도 횟수

            while (true)
            {
                Console.WriteLine($"3개의 숫자를 입력하세요 (1~9): ");
                int[] guess = new int[3];

                for (int i = 0; i < guess.Length; i++)
                {
                    // 3개의 숫자를 사용자에게 입력받고 int형으로 전환
                    guess[i] = int.Parse(Console.ReadLine());
                }

                int correct = 0;

                for (int i = 0; i < numbers.Length; i++)
                {
                    for (int j = 0; j < guess.Length; j++)
                    {
                        if (numbers[i] == guess[j])
                        {
                            correct++;
                            break;
                        }
                    }
                }

                attempt++;
                Console.WriteLine($"시도 #" + attempt + " : " + correct + " 개의 숫자를 맞추셨습니다.");

                if (correct == 3)
                {
                    Console.WriteLine($"축하합니다! 모든 숫자를 맞추셨습니다.");

                    break;
                }
            }

            /*********************************************************************************/
            int[,] map = new int[5, 5]
            {
                {1,1,1,1,1},
                {1,0,0,0,1},
                {1,0,1,0,1},
                {1,0,0,0,1},
                {1,1,1,1,1},
            };

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (map[i, j] == 1)
                    {
                        Console.Write("■");

                    }
                    else
                    {
                        Console.Write("□");

                    }
                    Console.WriteLine($"");
                }
            }
        }
    }
}