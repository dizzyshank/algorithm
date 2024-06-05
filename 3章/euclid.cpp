#include <iostream>
using namespace std;

int GCD(int m, int n) {
    if (n == 0) return m;

    return GCD(n, m % n);
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << GCD(m, n) <<endl;
}