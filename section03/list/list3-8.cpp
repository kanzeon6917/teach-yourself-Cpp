#include <iostream>

class A
{
    int m_v;

public:
    A(int);

    int v() const;
};

A::A(int v) : m_v(v)
{
}

int A::v() const
{
    return m_v;
}

int main()
{
    A x = 42;
    if(x.v() == 42)
    {
        std::cout << "OK" << std::endl;
    }
    else
    {
        std::cout << "NG" << std::endl;
    }
}