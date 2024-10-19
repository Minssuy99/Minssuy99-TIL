/* c언어 스타일의 배열 문자열 */

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    char myString[] = "string";

    for(int i = 0; i < 7; ++i)
    {
        cout << (int)myString[i] << endl;
    }

    cout << sizeof(myString) / sizeof(myString[0]) << endl;

    char cinString[255];

    cin >> cinString;

    cinString[4] = '\0'; // null character is \0

    cout << cinString << endl;


    // 입력버퍼 비우기
    cin.ignore(10000, '\n');

    char cinString2[255];
    cout << "input blank" << endl;
    cin.getline(cinString2, 100);

    int i = 0;
    while (true)
    {
        if (cinString2[i] == '\0')
        break;

        cout << cinString2[i] << " " << (int)cinString2[i] << endl;
        ++i;
    }

    

    return 0;
}