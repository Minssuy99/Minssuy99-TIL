/* 객체지향 프로그래밍과 클래스 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// struct : 보통 데이터만 다룰 때 사용한다. (멤버 변수들만 다룰때)
// class : 기능까지 들어가있을 때 일반적으로 사용한다. (멤버 함수도 있을 때)


class Friend
{
    public: // access specifier (public, private, protected)
            // 보통 멤버변수의 이름을 지을땐 멤버변수 이름 앞에 m_ 이라고 붙여주는 경우가 많다.
            // 또는 앞이나 뒤에 _만 붙여주는 경우가 많다더라
    string name;
    string address;
    int age;
    double height;
    double weight;

    void print()
    {
        cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
    }

};

void print(const string &name, const string &address, const int &age, const double &height, const double &weight)
{
    cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

int main()
{
    return 0;
}