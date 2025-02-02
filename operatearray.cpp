/*
 * 動的な配列をオブジェクト指向で実装
 * 作成者: magiri 
 * 作成日: 2025/02/01 
 */
#include <iostream>

using namespace std;

// 動的に配列サイズを変更する。
class DynamicArray {
// 外部からアクセス可能
public:
    // コンストラクタ(DynamicArrayオブジェクト作成時に配列を初期化。)
    DynamicArray(int initialSize = 10) {
        size = initialSize;
        data = new int[size];
    }

    // デストラクタ(DynamicArrayオブジェクト破棄時にメモリを開放。)
    ~DynamicArray() {
        delete[] data;
    }

    // オーバーロード関数(配列のように要素へのアクセス、値を取得・設定。)
		// 整数型の参照を定義。
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            cerr << "Index out of range" << endl;
            // 例外処理などのソースコード
        }
        return data[index];
    }

    // 配列要素数の取得
    int getSize() const {
        return size;
    }

    // 配列要素数の変更
    void resize(int newSize) {
        int* newData = new int[newSize];
        int copySize = min(size, newSize);
        for (int i = 0; i < copySize; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        size = newSize;
    }
// クラスの内部のみアクセス可能。
private:
    int* data; // 整数のアドレスを格納する変数
    int size;
};
// プログラムの実行開始点
int main() {
		DynamicArray array;

		// 要素へのアクセス
		array[0] = 10;
  	array[1] = 20;
  	cout << array[0] << endl;

    // サイズの変更
    array.resize(20);
    array[15] = 30;

    // 全要素の出力
    for (int i = 0; i < array.getSize(); ++i) {
    		cout << array[i] << " ";
    }
    cout << endl;
		return 0;
}
