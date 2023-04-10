#include <iostream>

int is_prime(int num);

int main() {
    int M, N, sum, min;

    std::cin >> M >> N;
    min = N;
    sum = 0;
    for (int i = M; i <= N; ++i) {
        if (is_prime(i)) {
            sum += i;
            if (i < min)
                min = i;
        }
    }
    if (sum == 0)
        std::cout << -1 << std::endl;
    else
        std::cout << sum << "\n" << min << std::endl;
    return 0;
}

int is_prime(int num) {
    if (num <= 1)
        return 0;

    int i = 2;
    while (i < num) {
        if (num % i == 0)
            return 0;
        i++;
    }
    return 1;
}