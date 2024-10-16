/* 매개변수와 실인자의 구분 */
#include <iostream>

using namespace std;

int foo(int x, int y) // int x와 y 는 Parameter(매개변수) 라고 함.
{
    return x + y;
}

int main()
{
    int x = foo(1, 2); // 1과 2는 actual arguments. 인수, 인자라고 부른다.

    cout << x << endl;

    return 0;
}