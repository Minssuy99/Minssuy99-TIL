# 생성자

생성자란?

클래스의 객체가 생성될 때 자동으로 호출되는 함수.

객체의 멤버 변수를 초기화 하는데 사용한다.

## Case 1. 생성자가 없는 경우
```cpp
class Student
{
private:
    int st_id;
    string st_name;

public:    
    /*  아무런 선언이 없을 땐 기본생성자가
                        자동으로 생성된 후 호출된다. */
}
```

## Case 2. 생성자 선언
```cpp
class Student
{
private:
    int st_id;
    string st_name;

public:
    Student()   // Constructor
    {
        st_id = 0;
        st_name = "NULL";
    }
}
```

## Case 3. Member Initializer List
```cpp
class Student
{
private:
    int st_id;
    string st_name;

public:
    Student() : st_id(0), st_name("NULL") // Member Initializer List
    {
        st_id = 1;
        st_name = "MULL"; // 이렇게 아래에서 새로 초기화가 가능하다.
    }
}
```

## Case 4
```cpp
class Student
{
private:
    int st_id;
    string st_name;

public:
    Student()   // 생성자도 오버로딩이 된다.
    {
        st_id = 0;
        st_name = "NULL";
    }

    Student(const int &id_in, const string &name_in) : st_id(id_in), st_name(name_in)
    {
        /* 
        st_id = id_in;
        st_name = name_in;      member initializer list 로도 초기화 가능.
         */
    }
}

```

## Case 5
```cpp
class Student
{
private:
    int m_id;
    string m_name;

public:
    // 위임 생성자
    Student(const string &name_in)
        : Student(0, name_in)   // ID는 0으로 초기화. Delegating Constructor. 위임생성자.
    {
    }

    // 실제 초기화 생성자
    Student(const int &id_in, const string &name_in)
        : m_id(id_in), m_name(name_in)
    {
    }

    void display() {
        cout << "ID: " << m_id << ", Name: " << m_name << endl;
    }
};

int main()
{
    Student student1("Alice");
    student1.display(); // 출력: ID: 0, Name: Alice

    Student student2(123, "Bob");
    student2.display(); // 출력: ID: 123, Name: Bob

    return 0;
}
```