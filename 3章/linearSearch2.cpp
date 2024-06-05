#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; ++i) cin >> a[i];

    int minimum_value = a[0];
    int semi_minimum_value = 20000000;

    for(int i=1; i<N; ++i) {
        if (a[i] < minimum_value) {
            semi_minimum_value = minimum_value;
            minimum_value = a[i];
        } else if (a[i] > minimum_value && a[i] < semi_minimum_value) {
            semi_minimum_value = a[i];
        }
    }
    cout << "最小値は " << minimum_value << endl;
    cout << "2番目に小さい値は " << semi_minimum_value << endl;
}