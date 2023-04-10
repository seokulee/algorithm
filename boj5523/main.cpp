#include <iostream>

int main() {
    using namespace std;
    int N, A, B, cnt_a = 0, cnt_b = 0;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A >> B;
        if (A > B)
            cnt_a++;
        else if (B > A)
            cnt_b++;
    }
    cout << cnt_a << " " << cnt_b << endl;
    return 0;
}
