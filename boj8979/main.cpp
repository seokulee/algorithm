#include <iostream>

using namespace std;

class Country {
public :
    int idx;
    long long G;
    long long S;
    int B;
};

int main() {
    int N, T;
    long long score, tmp;
    int cnt = 1;
    cin >> N >> T;
    Country C[N];
    for (int i = 0; i < N; ++i) {
        cin >> C[i].idx >> C[i].G >> C[i].S >> C[i].B;
        if (C[i].idx == T) {
            score = 1000000000000 * C[i].G + 1000000 * C[i].S + C[i].B;
        }
    }
    for (int i = 0; i < N; ++i) {
        tmp = 1000000000000 * C[i].G + 1000000 * C[i].S + C[i].B;
        if (tmp > score)
            cnt++;
    }
    cout << cnt;
    return 0;
}
