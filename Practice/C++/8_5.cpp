/* 위임 생성자 Delegating Constructors */

#include <iostream>

using namespace std;

class Student
{
  private:
    int m_id;
    string m_name;

    // 생성자 오버로딩은 가능하나 굉장히 비추천.
    // 초기화는 한 곳에서만 이루어지는 것이 좋다.
  public:
    Student(const string &name_in) // : m_id(0), m_name(name_in) -> 비추천
        : Student(0, name_in)
    {
    }

    Student(const int &id_in, const string &name_in) : m_name(name_in), m_id(id_in)
    {
    }

    void print()
    {
        cout << m_id << " " << m_name << endl;
    }
};

int main()
{
    Student st1(0, "MinSeong");
    st1.print();

    Student st2("SungGyu");
    st2.print();

    return 0;
}