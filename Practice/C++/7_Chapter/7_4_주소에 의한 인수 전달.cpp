/* 주소에 의한 인수 전달. Passing Arguments by Address (Call by Address) */

#include <iostream>

using namespace std;

void foo(int * ptr)
{
    cout << *ptr << " " << ptr << " " << &ptr << endl;
}

int main()
{
    int value = 5;

    cout << value << " " << &value << endl;

    int *ptr = &value;
    // TODO:

    cout << &ptr << endl;

    foo(ptr);
    foo(&value);
    // foo(5) 는 안됨.

    
    return 0;

}

