/* 생성자 */

#include <iostream>

using namespace std;

class Fraction
{
  private:
    int m_numerator;
    int m_denominator;

  public:
    Fraction() // Constructors
    {
        m_numerator = 0;
        m_denominator = 1;
    }

    // = 1 이라고 하면, 매개변수를 입력하지 않았을 때 기본값이 1이 되도록 설정한다.
    Fraction(const int &num_in = 1, const int &den_in = 1) // 생성자도 오버로딩이 된다.
    {
        m_numerator = num_in;
        m_denominator = den_in;
    }

    void print()
    {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};

int main()
{
    Fraction frac();
    frac().print();
}