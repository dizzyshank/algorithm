// N個の整数与えられる。
// この中から二つ選んで差を取る。その差の最大値を求めるアルゴリズム。
#include <iostream>
#include <vector>
using namespace std;

int main () {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    // 変数の宣言
    int max_value = a[0];
    int min_value = a[1];
    int diff;

    for (int i = 2; i < N; ++i) {
        if (a[i] > max_value) {
            max_value = a[i];
        } else if (a[i] < min_value) {
            min_value = a[i];
        }
    }
    diff = max_value - min_value;
    cout << "差の最大値は " << diff << endl;
}