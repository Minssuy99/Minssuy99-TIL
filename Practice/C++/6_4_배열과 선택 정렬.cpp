/* 배열과 선택 정렬 */

#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
    for (int index = 0; index < length; ++index)
        cout << array[index] << " ";
    cout << endl;
}

int main()
{
    const int length = 5;
    int array[length] = { 3, 5, 2, 1, 4};

    // 모범답안
    for (int startIndex = 0; startIndex < length - 1; ++startIndex)
    {
        int smallestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < length; currentIndex ++)
        {
            if (array[smallestIndex] > array[currentIndex])
            {
                smallestIndex = currentIndex;
            }
        }

        // Swap
        {
        int temp = array[smallestIndex];
        array[smallestIndex] = array[startIndex];
        array[startIndex] = temp;
        }
    }

    printArray(array, length);

    return 0;
}

/*
내 답안     (선택정렬 스스로 구현해서 너무 기분좋다...)
for (int i = 0; i < length-1; i ++)
{
    for (int y = i + 1; y < length; y++)
    {
        if (array[i] > array[y])
        {
            int min_number = array[y];
            array[y] = array[i];
            array[i] = min_number;
         }
    }
}

swap 구현하기

int temp = array[0];
array [0] = array[1];
array [1] = temp;

*/