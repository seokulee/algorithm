#include <iostream>

int main() {
    int N, result = 1;
    std::cin >> N;
    for (int i = 4; i > 0 ; i--) {
        result *= (N - i + 1);
    }
    result /= 24;
    std::cout << result << std::endl;
    return 0;
}
