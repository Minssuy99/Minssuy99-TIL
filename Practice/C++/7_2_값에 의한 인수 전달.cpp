/* 값에 의한 인수 전달. Call by value */

#include <iostream>

using namespace std;

void doSomething(int y)
{
    cout << "in Func " << y << " " << &y << endl;
}

int main()
{
    int x = 6;

    cout << "in main" << x << " " << &x << endl;

    doSomething(x); // 값이 복사되어 int y 에 들어감. 주소다름.
    doSomething(x + 1);

    return 0;
}
