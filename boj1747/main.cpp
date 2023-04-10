#include <iostream>

using namespace std;
int is_palindrome(int num);
const int MAX = 1004000;
bool    isPrime[MAX];
void eratos();

int main() {
    int N;
    cin >> N;
    eratos();

    for (int i = N; i < MAX; ++i) {
        if (isPrime[i] && is_palindrome(i)) {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}

void eratos() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < MAX; ++i) {
        isPrime[i] = true;
    }
    for (int i = 2; i * i < MAX; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int is_palindrome(int num) {
    string str;
    int n = num;
    while (num > 0) {
        str += (char) (num % 10 + '0');
        num /= 10;
    }
    if (stoi(str) == n)
        return 1;
    return 0;
}