using System;
using System.Diagnostics;

namespace ConsoleAppGeneric
{
    public class Program
    {
        class Stack<T>
        {
            private T[] elements;
            private int top;

            public Stack()
            {
                elements = new T[100];
                top = 0;
            }

            public void Push(T item)
            {
                elements[top++] = item;
            }

            public T Pop()
            {
                return elements[--top];
            }
        }



        public static void MainGeneric(string[] args)
        {
            Stack<int> intStack = new Stack<int>();
            intStack.Push(1);
            intStack.Push(2);
            intStack.Push(3);
            Console.WriteLine(intStack.Pop());
        }
    }
}