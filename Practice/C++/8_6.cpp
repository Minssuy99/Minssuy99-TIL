/* 소멸자  Destructor*/

#include <iostream>

using namespace std;

/*
class Simple
{
  private:
    int m_id;

  public:
    Simple(const int &id_in) : m_id(id_in)
    {
        cout << "Constructor" << m_id << endl;
    }

    ~Simple()
    {
        cout << "Destructor" << m_id << endl;
    }
};

int main()
{
    Simple s1(0);
    Simple s2(1);
    Simple *s3 = new Simple(0);

    delete s3;
    // 소멸자는 instance 가 메모리에 해제될 때 내부에서 자동으로 호출된다.
    // 동적할당으로 만들어진 경우에는 영역을 벗어나도 자동으로 메모리가 해제되지 않기 때문에
    // delete 로 메모리를 해제할 때에만 소멸자가 호출된다.
    // 소멸자를 프로그래머가 직접 호출하는 것은 대부분의 경우 권장되지 않는다.

    return 0;
}
 */

class IntArray
{
  private:
    int *m_arr = nullptr;
    int m_length = 0;

  public:
    IntArray(const int length_in)
    {
        m_length = length_in;
        m_arr = new int[m_length];

        cout << "Constructor" << endl;
    }

    ~IntArray()
    {
        if (m_arr != nullptr)
        {
            delete[] m_arr;
        }
    }

    int getLengt()
    {
        return m_length;
    }
};

int main()
{
    while (true)
    {
        IntArray my_int_arr(10000);
    }
}