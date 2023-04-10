#include <iostream>

int is_prime(int num);

int main() {
    int count, num, result;

    result = 0;
    std::cin >> count;
    while (count) {
        std::cin >> num;
        if (is_prime(num))
            result++;
        count--;
    }
    std::cout << result << std::endl;
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
