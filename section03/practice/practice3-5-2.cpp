#include <iostream>
#include <string>

class Base
{
public:
    virtual std::string name() const;
    virtual std::string most_name() const; // 純粋仮想関数
};

std::string Base::name() const
{
    return "Base";
}

class Derived : public Base
{
public:
    std::string name() const override; // オーバーライド
};

std::string Derived::name() const
{
    return "Derived";
}


class MoreDerived : public Derived
{
public:
    std::string name() const override; // オーバーライド
};

std::string MoreDerived::name() const
{
    return "MoreDerived";
}

std::string Base::most_name() const
{
    return "Called most_name()";
}

int main()
{
    Base base;
    Derived derived;
    MoreDerived moreDerived;

    std::cout << base.name() << std::endl; // Base
    std::cout << derived.name() << std::endl; // Derived
    std::cout << moreDerived.name() << std::endl; // MoreDerived

    std::cout << base.most_name() << std::endl; // Called most_name()
}
