#include <iostream>

class heavy_class
{
    int m_value;

    mutable int m_cache; // キャッシュ用のメンバ変数
    mutable bool m_cache_valid; // キャッシュの有効性を示すフラグ

public:
    int generate() const;

    void set(int value);
    int get() const;
};


// 設定された値からデータを生成するメンバ関数
int heavy_class::generate() const
{
    std::cout << "とても重いデータ生成関数" << std::endl;
    return m_value;
}

void heavy_class::set(int value)
{
    // 本来はセットされたタイミングで最終的につかうデータを生成できると良いが、
    // 本処理が重い場合には必要になるまで生成しないということもある

    m_cache_valid = false; // キャッシュは無効
    m_value = value;
}

// getterなのでconstメンバー関数にする
int heavy_class::get() const
{
    // キャッシュが有効であればそれを返す
    if (m_cache_valid)
    {
        return m_cache;
    }

    // 本来はconstメンバーはメンバー変数を変更できないが、
    // mutableなメンバー変数は変更できる
    m_cache = generate(); // データを生成してキャッシュに保存
    m_cache_valid = true; // キャッシュは有効

    return m_cache;
}


int main()
{
    heavy_class heavy_object;

    heavy_object.set(100);

    std::cout << heavy_object.get() << std::endl; // データ生成関数が呼び出される

    std::cout << heavy_object.get() << std::endl; // キャッシュが有効なのでデータ生成関数は呼び出されない

    heavy_object.set(200); // キャッシュは無効になる

    std::cout << heavy_object.get() << std::endl; // データ生成関数が呼び出される

    std::cout << heavy_object.get() << std::endl; // キャッシュが有効なのでデータ生成関数は呼び出されない
}