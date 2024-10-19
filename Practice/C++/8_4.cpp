/* 생성자 멤버 초기화 목록 */

#include <iostream>

using namespace std;

class Something
{
  private:
    int m_i;
    double m_d;
    char m_c;
    int m_arr[5];

  public:
    Something()
        : m_i(1), m_d(3.14), m_c('a'), // member initializer list
          m_arr{1, 2, 3, 4, 5}
    // m_i{1}, m_d{3.14}, m_c{'a'}  -> Uniform initialization, 형변환 안됨.
    // C++11 버전부터 배열도 초기화 가능.
    {
        /*
        m_i = 1;
        m_d = 3.14;
        m_c = 'a';
         */
    }

    void print()
    {
        cout << m_i << " " << m_d << " " << m_c << endl;
        for (auto &e : m_arr)
        {
            cout << e << " ";
        }
        cout << endl;
    }
};

int main()
{
    Something som;

    som.print();

    return 0;
}