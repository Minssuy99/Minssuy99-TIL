/* 참조에 의한 인수 전달. Call by Reference   */

#include <iostream>
#include <cmath> // sin(), cos()

using namespace std;

void addOne(int &y) // call by reference
{
    y = y + 1;
}

void getSinCos(double degrees, double &sin_out, double &cos_out) // degrees : 도
{
    static const double pi = 3.141592;     // const : 상수, static : 동적   const 를 이용하여 값이 변하는걸 막을때 잘 써먹어보자
    double radians = degrees * pi / 180.0; // 라디안 = 각도 x 파이 / 180도
    sin_out = sin(radians);
    cos_out = cos(radians);
}

void foo(const int &x)
{
    cout << x << endl;
}

void poo(int *&ptr)
{
    cout << ptr << " " << &ptr << endl;
}

int main()
{
    int x = 5; // 원래라면 복사되어 int y 에 들어가는데, 참조를 하면 이놈 주소랑

    cout << x << " " << &x << endl;

    addOne(x); // 이놈 주소가 같음.

    cout << x << " " << &x << endl;

    cout << "*********" << endl;

    /***************************************************/

    double sin(0.0);
    double cos(0.0);

    getSinCos(30.0, sin, cos); // 30.0 은 복사되어 들어가고, sin과 cos 는 값이 바뀜.

    cout << sin << " " << cos << endl;

    /***************************************************/

    // foo(6);  이렇게 하면 오류가 뜬다. 주소가 없음.
    // 선언 및 초기화를 해주거나 foo 함수의 파라미터를 const 로 받으면 된다.

    int p = 5;
    int *ptr = &p;

    cout << ptr << " " << &ptr << endl;
    poo(ptr);

    return 0;
}