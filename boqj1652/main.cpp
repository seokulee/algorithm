#include <iostream>

using namespace std;
bool is_dot(char c);
bool is_x(char c);

int main() {
    int N;
    bool one_flag = false, two_flag = false;
    cin >> N;

    int j_count = 0, i_count = 0;
    char arr[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (is_x(arr[i][j])) {
                if (two_flag)
                    j_count++;
                one_flag = two_flag = false;
            } else if (is_dot(arr[i][j])) {
                if (two_flag) continue;
                else if (one_flag) two_flag = true;
                else one_flag = true;
            }
        }
        if (two_flag)
            j_count++;
        one_flag = two_flag = false;
    }
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < N; ++i) {
            if (is_x(arr[i][j])) {
                if (two_flag)
                    i_count++;
                one_flag = two_flag = false;
            } else if (is_dot(arr[i][j])) {
                if (two_flag) continue;
                else if (one_flag) two_flag = true;
                else one_flag = true;
            }
        }
        if (two_flag)
            i_count++;
        one_flag = two_flag = false;
    }

    cout << j_count << ' ' << i_count << endl;
    return 0;
}

bool is_dot(char c) {
    if (c == '.')
        return true;
    return false;
}

bool is_x(char c) {
    if (c == 'X')
        return true;
    return false;
}
