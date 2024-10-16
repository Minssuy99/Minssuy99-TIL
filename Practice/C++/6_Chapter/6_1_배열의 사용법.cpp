/* 배열의 사용법. 1 */

#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

enum StudentName
{
    Apple,
    Banana,
    Charlie,
    NUM_STUDENTS,
};

int main()
{
    int one_student_score;
    int student_scores[5];

    // int my_array[5] = {1, 2, 3, 4, 5}; // 인자를 다 안채워넣으면 알아서 0으로 초기화 됨.

    int student_socresss[NUM_STUDENTS]; // 이거 진짜 신세계다

    cout << "enum's size is " << sizeof(StudentName) << endl; // 4 bytes
    cout << sizeof(Apple) << endl;                            // 4 bytes

    student_socresss[0] = 0;
    student_socresss[Banana] = 0;
    student_socresss[Charlie] = 0;

    cout << sizeof(one_student_score) << endl; // 4 bytes
    cout << sizeof(student_scores) << endl;    // 20 bytes

    student_scores[0] = 100;
    student_scores[1] = 90;
    student_scores[2] = 80;
    student_scores[3] = 70;
    student_scores[4] = 60;

    cout << student_scores[0] + student_scores[2] << endl;

    Rectangle rect_arr[10];
    cout << sizeof(Rectangle) << endl; // 8 bytes
    cout << sizeof(rect_arr) << endl;  // 80 bytes

    return 0;
}