#include <iostream>
#include <string>

using namespace std;

// 人物に関するデータを１つの単位（構造体）とみなす。
struct Person {
	string name;
  int age;
	double height;
};
// Person型の構造体を受け取る。結果を標準出力する。
void printPersonInfo(const Person& person) {
	cout << "名前：" << person.name << endl;
	cout << "年齢：" << person.age << endl;
	cout << "身長：" << person.height << endl;
}
// Person型の構造体に対して指定された新しい年齢に変更する。
void changeAge(Person* person, int newAge) {
	person->age = newAge; // ポインタを使って構造体のメンバにアクセス
}
// 
int main() {
	Person person1 = {"太郎", 20, 175.0};
  printPersonInfo(person1);

  Person* person2 = new Person{"次郎", 25, 180.0};
  changeAge(person2, 26);
  printPersonInfo(*person2);
 
 	delete person2; // 動的に確保したメモリを解放
  return 0;
}
