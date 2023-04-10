#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    int one, two;
    string str;
    for (int i = 0; i < N; ++i) {
        cin >> str;
        if (str == "KBS1")
            one = i;
        if (str == "KBS2")
            two = i;
    }

    if (one > two) {

        if (one > 1) {
            for (int i = 0; i < one - 1; ++i) {
                cout << 3;
            }
            cout << 1;
            for (int i = 0; i < one; ++i) {
                cout << 4;
            }
            if (two > 2) {
                cout << 1;
                for (int i = 0; i < two - 2; ++i) {
                    cout << 3;
                }
                cout << 1;
                for (int i = 0; i < two - 1; ++i) {
                    cout << 4;
                }
            } else if (two == 2) {
                cout << 1;
                cout << 3;
            } else if (two == 0) {
                cout << 1;
                for (int i = 0; i < one - 2; ++i) {
                    cout << 3;
                }
                cout << 1;
                for (int i = 0; i < one - 1; ++i) {
                    cout << 4;
                }
            }
        } else if (one == 1) {
            cout << 3;
        }
    } else {
        if (one > 1) {
            for (int i = 0; i < one - 1; ++i) {
                cout << 3;
            }
            cout << 1;
            for (int i = 0; i < one; ++i) {
                cout << 4;
            }
            if (two > 2) {
                cout << 1;
                for (int i = 0; i < two - 2; ++i) {
                    cout << 3;
                }
                cout << 1;
                for (int i = 0; i < two - 1; ++i) {
                    cout << 4;
                }
            }
        } else if (one == 1) {
            cout << 3;
            if (two > 2) {
                for (int i = 0; i < two - 2; ++i) {
                    cout << 3;
                }
                cout << 1;
                for (int i = 0; i < two - 1; ++i) {
                    cout << 4;
                }
            } else if (two == 2) {
                cout << 3;
            }
        } else {
            cout << 1;
            if (two > 2) {
                for (int i = 0; i < two - 2; ++i) {
                    cout << 3;
                }
                cout << 1;
                for (int i = 0; i < two - 1; ++i) {
                    cout << 4;
                }
            } else if (two == 2) {
                cout << 1;
                cout << 3;
            }
        }
    }
    return 0;
}
