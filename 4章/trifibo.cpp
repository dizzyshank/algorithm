//Tn=Tn-1+Tn-2+Tn-3(N=3,4,...)
// T0=0,T1=0,T2=1

#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

long long trifibo(int N) {
    // ベースケース
    if (N == 0) return 0;
    if (N == 1) return 0;
    if (N == 2) return 1;

    if (memo[N] != -1) return memo[N];
    return memo[N] = trifibo(N-1) + trifibo(N-2) + trifibo(N-3);
}

int main() {
    int N;
    cin >> N;

    memo.assign(N+1,-1);

    for (int i = 3; i < N; ++i) {
        if (memo[i] == -1) {
            memo[i] = trifibo(i);
        }
        cout << trifibo(i) << endl;
    }
    cout << trifibo(N) << endl;
}