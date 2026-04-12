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

    void set_name(std::string name);
    void set_age(int age);

    std::string name() const;
    int         age() const;
};

// 共通な初期化関数が書かれたコンストラクタ
person::person(int age) : m_age(age)
{
    // 複数のコンストラクタで共通な大本の処理をprivateなコンストラクタに用意し、
    // 委譲コンストラクタを使うことで、一貫した（漏れのない）初期化手順を提供できる
    std::cout << "共通コンストラクター呼び出し" << std::endl;
}

person::person()
    : person(-1) // 委託先コンストラクタ
{
    std::cout << "引数なしのコンストラクター呼び出し" << std::endl;
}

// 委託元コンストラクタ（名前と年齢を与えて初期化する）
person::person(std::string name, int age)
    : person(age) // 委託先コンストラクタ
{
    std::cout << "引数ありのコンストラクター呼び出し" << std::endl;

    // 初期化中にメンバー関数を呼び出すこともできる
    set_name(name);
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
    // 引数を渡して初期化
    person alice("Alice", 30);

    std::cout << "名前: " << alice.name() << ", 年齢: " << alice.age() << std::endl;
}