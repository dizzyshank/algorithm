// 格桁の値が1以上9以下の数値のみである整数と見做せるような、長さNの文字列Sが与えられる。
// この文字列の中で文字と文字の間のうちのいくつかの場所に「+」を入れることができる。
// このようにしてできるすべての文字列を数値とみなして、総和を計算する0(2^N)のアルゴリズムを設計する。
// 例えばS="125"の時は、125, 1+25, 12 + 5, 1 + 2 + 5の総和を取って176となる。

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
    // 文字列Sを宣言
    string S;
    cin >> S;

    // 文字列Sの長さNをを取得、Nは桁数
    int N = S.size();

    // 文字列SをN文字に分けて配列Aに格納
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        A[i] = int(S[i]-'0');
    }

    // A = {1,2,3,4} のような状態(int型)
    // 1234だった場合、1234||1+234, 1+2+34, 1+23+4||, 12+34, 12+3+4||, 123+4||, 1+2+3+4
    // 上のを+の数で分類する。0:1234 || 1:1+234,12+34, 123+4 || 2:1+2+34, 1+23+4, 12+3+4 || 3:1+2+3+4
    // 12345だった場合、12345, 1+2345, 12+345, 123+45, 1234+5, 1+2+3+4+5

    // 
    for (int i = 0; i < N; ++i) {

    }

}