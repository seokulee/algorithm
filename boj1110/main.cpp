#include <iostream>

using namespace std;
int plus_cycle(int n);

int main() {
    int N, result = 0;
    cin >> N;

    result = plus_cycle(N);
    cout << result << endl;
    return 0;
}

int plus_cycle(int n) {
    int left, right, cycle = 0, tmp;

    if (n < 10) {
        left = 0;
        right = n;
    } else {
        left = n / 10;
        right = n % 10;
    }

    do {
        tmp = right;
        right = (left + right) % 10;
        left = tmp;
        cycle++;
    } while ((left*10 + right) != n);
    return cycle;
 }