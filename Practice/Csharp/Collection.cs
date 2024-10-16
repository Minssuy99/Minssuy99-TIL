using System;
using System.Collections.Generic; // Dictionary ��� �� �߰�

namespace ConsoleApp2
{
    public class Program
    {
        public static void Main2(string[] args)
        {
            /*********************** [ List ] ************************/
            List<int> numbers = new List<int>();   // �� ����Ʈ ����
            numbers.Add(1);
            numbers.Add(2);
            numbers.Add(3);
            numbers.Remove(2);

            for (int i = 0; i < numbers.Count; i++)   // Count �빮�ڷ� �����
            {
                Console.WriteLine(numbers[i]);
            }

            foreach (int i in numbers)
            {
                Console.WriteLine(i);
            }

            /*********************** [ Dictionary ] ************************/

            Dictionary<string, int> scores = new Dictionary<string, int>();
            scores.Add("Alice", 100);
            scores.Add("Bob", 80);
            scores.Add("Charlie", 90);
            scores.Remove("Bob");

            foreach (KeyValuePair<string, int> pair in scores)
            {
                Console.WriteLine(pair.Key + ": " + pair.Value);
            }
        }
    }
}