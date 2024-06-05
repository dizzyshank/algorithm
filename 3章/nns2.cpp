// ペア和のK以上の中での最小値
// N個の整数a0~aN、N個の整数b0~bNが与えられる。
// 2組の整数列からそれぞれ一個ずつ選んで和をとる。その和として考えられる値のうち整数K以上の範囲内での最小値を求める。
#include <iostream>
#include <vector>
using namespace std;

// 二つの整数を求める関数
int calc_sum(int a1, int b1) {
    return a1 + b1;
}

int main() {
    // 入力値を受け取る
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; ++i) cin >> a[i] >> b[i];

    // 求める値を有り得ない値で初期化しておく
    int min_target = 10000000;
    int result;
    int min_i = -1, min_j = -1;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            // 二つの整数を計算する
            result = calc_sum(a[i], b[j]);
            if (result < min_target && K <= result) {
                min_target = result;
                min_i = i;
                min_j = j;
            }
        }
    }

    cout << min_target << endl;
    cout << "配列aの要素番号は " << min_i << endl;
    cout << "配列bの要素番号は " << min_j << endl;
}