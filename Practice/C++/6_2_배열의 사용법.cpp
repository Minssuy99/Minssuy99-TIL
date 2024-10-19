/* 배열의 사용법. 2 */

#include <iostream>

using namespace std;

// 매개변수가 모습이 배열인데, 실제론 배열을 받는게 아닌 포인터를 받는것.
void doSomething(int students_scores[20])
{
    cout << (size_t)&students_scores << endl;
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << sizeof(students_scores) << endl;
}

int main()
{
    const int num_students = 20;

    int students_scores[num_students] = {1, 2, 3, 4, 5, };

    // x64에서는 long long 으로 10진수로 변환, 멀티플랫폼에서는 (size_t)
    cout << (long long)&students_scores << endl;
    cout << (size_t)&students_scores << endl;
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << endl;

    doSomething(students_scores);   // 주소가 다름

    return 0;
}