#include <iostream>

int main() {
    int min, max, first;
    int sum = 0;

    std::cin >> min >> max;
    first = max;
    for (int i = min; i <= max; i++) {
        for (int j = 1; j <= i; j++) {
            if (j * j == i) {
                sum += i;
                if (i < first)
                    first = i;
                break;
            }
        }
    }
    if (sum == 0)
        std::cout << "-1" << std::endl;
    else
        std::cout << sum << "\n" << first << std::endl;
    return 0;
}
