// N個の正の整数a0~aN-1が与えられる。これらに対して「N個の整数がすべて偶数ならば2で割った値に置き換える」という操作を、操作が行えなくなるまで繰り返す。
// 何回の操作を行うことになるかを求めるアルゴリズムを設計する。

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    int count = 0;
    int flag = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (a[j] % 2 == 1) {
                flag = 1;
                break;
            } else if (a[j] % 2 == 0) {
                a[j]/=2;
            }
            // cout << j << "周目 " << a[j] << endl;
        }
        if (flag == 1) {
            break;
        }
        ++count;
    }
    
    cout << "操作は " << count << " 回行われました。" << endl;
}