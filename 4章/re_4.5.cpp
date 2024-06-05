// 十進法表記で格桁の値が7,5,3のいずれかであり、かつ7,5,3がいずれも一度以上は登場する整数を「753数」と呼ぶ。
// 正の整数Kが与えられた時に、K以下の753数が何個あるかを求めるアルゴリズムを設計
// ただしKの桁数をdとしてO(3^d)程度の計算量まで許容。
// 例えば、k=50(桁数2)が与えられた場合、一桁目:13,15,17,23,25,27,33,35,37,43,45,47, 二桁目:3

#include <iostream>
using namespace std;

// N: 入力
// cur: 現在の値
// use: 7, 5, 3 のうちどれを使ったか
// counter: 答え
void func(long long N, long long cur, int use, long long &counter){
    if (cur > N) return; // ベースケース
    if (use == 0b111) ++counter; // 答えを増やす

    // 7 を付け加える
    func(N, cur * 10 + 7, use | 0b001, counter);

    // 5 を付け加える
    func(N, cur * 10 + 5, use | 0b010, counter);

    // 3 を付け加える
    func(N, cur * 10 + 3, use | 0b100, counter);
}

int main() {
    long long N;
    cin >> N;
    long long counter = 0;
    func(N, 0, 0, counter);
    cout << counter << endl;
}