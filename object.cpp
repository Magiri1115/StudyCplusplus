/* 
 * 説明：このプログラムは、人を表現するクラスを作成、２人の人のオブジェクトを生成し
 * それぞれの人が自己紹介をするプログラムです。
 * 作成者: magiri 
 * 作成日: 2025/02/01 
 */
#include <iostream>
#include <string>

using namespace std;

// 個人情報を持つクラス
class Person {
private:
    string name;
    int age;

public:
    // コンストラクタ (初期化)
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // メソッド (名前を取得)
    string getName() {
        return name;
    }

    // メソッド (年齢を取得)
    int getAge() {
        return age;
    }

    // メソッド (自己紹介)
    void introduce() {
        cout << "私の名前は" << name << "で、" << age << "歳です。" << endl;
    }
};

int main() {
    // オブジェクトの生成
    Person person1("太郎", 25);
    Person person2("花子", 30);
    // メソッドの呼び出し
    person1.introduce(); // "私の名前は太郎で、25歳です。" と出力
    person2.introduce(); // "私の名前は花子で、30歳です。" と出力
    return 0;
}
