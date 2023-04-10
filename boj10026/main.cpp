#include <iostream>
#include <queue>

#define MAX 100
using namespace std;

int N;
char MAP[MAX][MAX];
bool VISIT[MAX][MAX];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void BFS(int a, int b) {
    queue<pair<int, int>> Q;
    Q.push(make_pair(a,b));
    VISIT[a][b] = true;

    while (!Q.empty()) {
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < N && ny < N) {
                if (!VISIT[nx][ny]) {
                    if (MAP[nx][ny] == MAP[x][y]) {
                        VISIT[nx][ny] = true;
                        Q.push(make_pair(nx, ny));
                    }
                }
            }
        }
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> MAP[i][j];
        }
    }
    return 0;
}
