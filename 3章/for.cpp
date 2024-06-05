#include <iostream>
#include <chrono>

void count(int N) {
    for (int i = 1; i <= N; ++i) {
        // 何もしない
    }
}

void count2(int N) {
    for(int i = 1; i <= N; ++i){
        for(int j = 1; j <= N; ++j){
            //何もしない
        }
    }
}

int main() {
    int N = 100000; // 固定値を使用

    auto start = std::chrono::high_resolution_clock::now();
    count(N);
    auto end = std::chrono::high_resolution_clock::now();

    auto start2 = std::chrono::high_resolution_clock::now();
    count2(N);
    auto end2 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    std::cout << "Execution time: " << duration.count() << " seconds" << std::endl;

    std::chrono::duration<double> duration2 = end2 - start2;
    std::cout << "Execution time: " << duration2.count() << " seconds" << std::endl;

    return 0;
}
