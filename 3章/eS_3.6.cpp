// 二つの整数K, Nが与えられる。
// 0 <= X, Y , Z <= K を満たす整数(X, Y, Z)の組であってX+ Y + Z = N を満たすものが何通りあるかを求めるO(N^2)のアルゴリズムを設計

#include <iostream>
using namespace std;

int main () {
    int N, K;
    cin >> N >> K;

    // 整数の組 X, Y, Zの宣言および条件
    int X, Y, Z;
    // 整数 X, Y, Z の条件
    0 <= X, Y, Z <= K;

    // 解の個数カウント用変数
    int count = 0;
    // 解の個数カウント用一時変数
    int tmp_count = 0;
    // フラグ
    int flag = 0;

    if (3*K >= N) {
        // ZをKから 2K >= N-i を満たすところまで減らしていく
        for (int i = K; i < 0; --i) {
            if (K < N - K) {
                for (int j = K - 1; 2*j >= N - j; --j) {
                    tmp_count += j;
                }
            } else if (K > N - K) {
                for (int j = N - K + 1; N - K <= N; ++j) {
                    tmp_count += j;
                }
            } else {

            }

            count += tmp_count;
        }
    } else {
    }

}