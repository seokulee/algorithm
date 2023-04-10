#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, result = 0;

    cin >> N;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for (int i = 0; i < N; ++i) {
        result += arr[i] * (N - i);
    }
    cout << result << endl;
    return 0;
}
