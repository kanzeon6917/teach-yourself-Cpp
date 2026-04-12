#include <iostream>
#include <string>

class person
{
    std::string m_name;
    int         m_age;

    person(int age);

public:
    person();
    person(std::string name, int age);

    person(const person& other); // コピーコンストラクタ

    void set_name(std::string name);
    void set_age(int age);

    std::string name() const;
    int         age() const;
};

person::person(int age) : m_age(age)
{
    std::cout << "共通コンストラクター呼び出し" << std::endl;
}

person::person() : person(-1)
{
    std::cout << "引数なしのコンストラクター呼び出し" << std::endl;
}

person::person(std::string name, int age) : person(age)
{
    std::cout << "引数ありのコンストラクター呼び出し" << std::endl;
    set_name(name);
}

// コピーコンストラクタの定義
person::person(const person& other)
{
    std::cout << "コピーコンストラクター呼び出し" << std::endl;
    // 名前をコピーする
    set_name(other.name());
    set_age(other.age());
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
    person alice("Alice", 30); // 引数ありのコンストラクターが呼び出される

    person copy(alice); // コピーコンストラクターが呼び出される
    std::cout << "コピーされた人の名前: " << copy.name() << ", 年齢: " << copy.age() << std::endl;
}