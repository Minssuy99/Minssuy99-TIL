# Uniform Initialization

## 목차
* [Uniform Initialization 이란?](#uniform-initialization-이란)
* [📑 예제코드 1](#-예제코드-1)
* [📢 출력결과](#-출력결과)
* [📑 예제코드 2](#-예제코드-2)
* [📢 출력결과](#-출력결과-1)
* [🤔 왜 굳이 중괄호로 초기화 해야해?](#-왜-굳이-중괄호로-초기화-해야해)

</br>
</br>

## Uniform Initialization 이란?

균일한 초기화, 유니폼 초기화 라고 불린다.

C++11 에서 도입된 초기화 방식으로, 중괄호 `{}` 를 사용하여 객체나 변수를 초기화 하는 방법이다.


## 📑 예제코드 1
```cpp
#include <iostream>

using namespace std;

class Food
{
public:
    Food()  // Constructor
    {
        std::cout << "I like pizza." << std::endl;
    }
};

int main()
{
    Food food();    // 출력?
}
```

위의 코드를 컴파일 하면 어떤 결과가 나올까?


## 📢 출력결과
```
[출력결과]

```

정답은 __'아무것도 나타나지 않는다'__ 이다.

왜 `I like pizza.` 가 출력되지 않았을까?

언뜻 봤을 땐, `Food` 클래스의 생성자가 정의되어 있고, main 함수에서 `Food` 객체를 생성하는 것 처럼 보인다.

하지만 코드의 `main` 함수에서 객체를 생성하는 부분인 `Food food();` 는 __함수의 정의__ 로 해석된다.

쉽게 말해, `Food` 를 리턴하고, 인자`()` 를 받지않는 `food` 라는 이름의 함수를 정의한 것이다.

__*C++ 컴파일러*__ 는 함수의 정의처럼 보이는 것들은 모두 함수의 정의로 해석한다.

</br>

## 📑 예제코드 2
```cpp
#include <iostream>

using namespace std;

class Food
{
public:
    Food()
    {
        cout << "I like pizza." << endl;
    }
};

class Beverage
{
public:
    Beverage()
    {
        cout << "I like Monster." << endl;
    }
};

int main()
{
  Beverage bev(Food());  // 출력?
}
```
조금 더 복잡한 위의 코드는 어떨까?



## 📢 출력결과
```
[출력결과]

```

마찬가지로 __아무것도 출력되지 않는다.__

첫번째 예시와 같은 이유로, __함수 선언__ 으로 해석이 되기 때문이다.

인자로 `Food` 를 리턴하고 인자가 없는 함수를 받으며, 반환타입이 `Beverage` 인 함수 `bev` 를 정의한 것이다.

## 유니폼 초기화
```cpp
class Food
{
public:
    Food()  // Constructor
    {
        std::cout << "I like pizza." << std::endl;
    }
};

int main()
{
    Food food{};    // 이번엔 중괄호를 사용함. 결과는?
}
```
소괄호`()` 가 아닌 중괄호`{}`를 사용하는 유니폼초기화를 사용하면 원하는 출력값을 얻을 수 있다.

## 출력결과
```
[출력결과]
I like pizza.
```

</br>

## 🤔 왜 굳이 중괄호로 초기화 해야해?

클래스를 통해 객체를 생성할 땐, `Food food;` 로 초기화를 해도 되는데,

왜 굳이 유니폼 초기화 `Food food{};` 를 사용할까?

대표적인 이유는 __타입 안정성__ 이다.

중괄호 `{}` 를 이요한 초기화는 타입의 불일치로 인한 오류를 방지한다.

쉬운 예시를 들자면 아래와 같다.
```cpp
int x(3.5); //  Narrowing Conversion. 소숫점 자리는 버려지고, 3 으로 캐스팅 됨.
int y = 3.5; // 위와 동일

int z{5.5}; // 에러 발생
```

예시와 같이, 대입 초기화에 대해서는 암시적 타입 변환이 발생할 수 있지만, 중괄호 초기화에서는 오류를 일으킨다.

그리고 내 개인적인 생각이지만, 중괄호 `{}` 가 있음으로써 확실하게 객체가 생성된다고 알리는 표시로 보여질테니,

인스턴스를 생성할 때 중괄호 `{}` 를 붙여주는 것이 다른 개발자가 보기에도 가독성이 좋아질 것이라고 생각한다.