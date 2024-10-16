/* 포인터와 정적배열 */

#include <iostream>

using namespace std;

// int main()
// {
//     int array [5] = { 9, 7, 5, 3, 1};

//     cout << array[0] << " " << array[1] << endl;
//     cout << array << endl;  // 배열이 아닌 포인터
//     cout << &(array[0]) << endl;

//     cout << *array << endl;

//     char name[] = "MinSeong Kim";
//     cout << *name << endl;

//     int *ptr = array;
//     cout << array << endl;
//     cout << ptr << endl;
//     cout << *ptr << endl;
    

//     return 0;
// }

/************************************************************************************/

// void printArray(int *array)     // 아래의 매개변수랑 똑같다.....이렇게 쓰는게 덜 헷갈리고 좋다.
// void printArray(int array[]) // 매개변수에 []가 있어서 배열처럼 보이지만 내부적으론 포인터이다.
// {
//     cout << sizeof(array) << endl;
//     cout << *array << endl;

//     *array = 100;   // 첫번째 요소를 100을 넣어주고 main 에서 출력해보면...
// }



// int main()
// {
//     int array[5] = {9, 7, 5, 3, 1};

//     cout << sizeof(array) << endl;  // 이건 당연히 배열의 사이즈를 말하는거고

//     int *ptr = array;

//     cout << sizeof(ptr) << endl; // 이건 배열을 가리키는 '포인터 변수'의 크기

//     printArray(array);  // * 그래서 여기도 8로 나온다.

//     cout << array[0] << " " << *array << endl; // 100이 나온다.

//     return 0;
// }

/************************************************************************************/

struct MyStruct
{
    int array[5] = {9, 7, 5, 3, 1};
};

void doSomething(MyStruct ms)
{
    cout << sizeof(ms.array) << endl;
}

void doSomething(MyStruct  *ms)
{
    cout << sizeof((*ms).array) << endl;
}

int main()
{
    MyStruct ms;
    cout << ms.array[0] << endl;
    cout << sizeof(ms.array) << endl;

    doSomething(ms);
    doSomething(&ms);

    return 0;
}