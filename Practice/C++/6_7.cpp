/* 포인터 기본 사용법 */

#include <iostream>

using namespace std;

int main()
{
    int x = 5;

    int *ptr_x = &x;

    cout << ptr_x << endl;
    cout << *ptr_x << endl;
    cout << endl;

    cout << "x address is " << &x << endl;
    cout << "x pointer address is " << &ptr_x << endl;
    cout << "de-reference address is " << &(*ptr_x) << endl;

    return 0;
}