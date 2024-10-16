/* 포인터 연산과 배열 인덱싱   */

#include <iostream>

using namespace std;

int main()
{
    short value = 7.0;
    short *ptr = &value;

    cout << uintptr_t(ptr - 1) << endl;
    cout << uintptr_t(ptr) << endl; // int 로 캐스팅했었는데, uintptr_t 가 더 좋다더라. 이건 알아봐야할듯
    cout << uintptr_t(ptr + 1) << endl;
    cout << uintptr_t(ptr + 2) << endl;

    cout << "이거 대체 뭔차이냐고" << endl;
    cout << sizeof(value) << endl;  // 아 이건 자료형 크기
    cout << size_t(value) << endl;  // 아 이건 변수 값...
    cout << uintptr_t(ptr) << endl; // 아 이건 포인터 주소 10진수로 보여주는 전용템이구나..

/************************************************************************************/
    
    int array[] = { 9 , 7 , 5, 3, 1 };
    int *ptr1 = array;

    for(int i = 0; i < 5; ++ i)
    {
        //cout << array[i] << " " << (uintptr_t)&array[i] << endl;
        cout << *(ptr1 + i) << " " << (uintptr_t)(ptr1 + i) << endl;
    }

/***********************************************************************************/
    char name[] = "MinSeong Kim";

    const int n_name = sizeof(name) / sizeof(char);

    char *ptr2 = name;

    for (int i = 0; i < n_name; ++i)
    {
        cout << *(name + i);
    }

    cout << endl;

    for (int i = 0; i < n_name; ++i)
    {
        cout << *(ptr2 + i);
    }

    return 0;
}