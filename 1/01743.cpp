#include <iostream>
#include <queue>
using namespace std;

char floors[101][101];	// input
char check[101][101];	// 방문 체크

int di[4] = { 1, 0, -1, 0 };
int dj[4] = { 0, 1, 0, -1 };

int N, M;

int BFS(int a, int b) {
	queue<pair<int, int>> B;
	B.push(make_pair(a, b));
	check[a][b] = 1;
	int cnt = 1;

	while (!B.empty()) {
		int tmp_i = B.front().first;
		int tmp_j = B.front().second;
		B.pop();

		for (int i = 0; i < 4; i++) {
			int move_i = tmp_i + di[i];
			int move_j = tmp_j + dj[i];

			if (move_i<1 || move_i>N) { continue; }
			else if (move_j<1 || move_j>M) { continue; }
			else if (!check[move_i][move_j] && floors[move_i][move_j]) {
				B.push(make_pair(move_i, move_j));
				check[move_i][move_j] = 1;
				cnt++;
			}
		}
	}

	return cnt;
}

int main() {
	// input
	int K; cin >> N >> M >> K;

	for (int i = 0; i < K; i++) {
		int r, c; cin >> r >> c;
		floors[r][c] = 1;
	}

	// BFS
	int max_cnt = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (!check[i][j] && floors[i][j]) {
				int tmp_cnt = BFS(i, j);
				if (tmp_cnt > max_cnt) max_cnt = tmp_cnt;
			}
		}
	}

	cout << max_cnt << endl;
}
