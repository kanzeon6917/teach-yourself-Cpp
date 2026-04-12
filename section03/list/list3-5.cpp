#include <iostream>
#include <string>

class person
{
    std::string m_name;
    int m_age;

public:
    person();
    ~person();

    void set_name(std::string name);
    void set_age(int age);

    std::string name() const;
    int age() const;
};


person::person() : m_age(-1)
{
    std::cout << "コンストラクタが呼び出されました" << std::endl;
}

person::~person()
{
    std::cout << "デストラクタが呼び出されました" << std::endl;
}

void person::set_name(std::string name)
{
    m_name = name;
}

void person::set_age(int age)
{
    m_age = age;
}

std::string person::name() const
{
    return m_name;
}

int person::age() const
{
    return m_age;
}

int main()
{
    person bob;
    bob.set_name("Bob");
    bob.set_age(20);
    std::cout << "名前: " << bob.name() << ", 年齢: " << bob.age() << std::endl;
    std::cout << "main関数の終わりに到達しました" << std::endl;
}