#include <iostream>
#include <queue>
using namespace std;

int box[1001][1001];	// input
char check[1001][1001];	// 방문 체크용
int tomato[1001][1001];

int di[4] = { 1, 0, -1, 0 };
int dj[4] = { 0, 1, 0, -1 };

int main() {
	int N, M; cin >> M >> N;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> box[i][j];

	// 맨 처음 익어있는 토마토 체크
	queue<pair<int, int>> BFS;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (box[i][j] == 1) {
				BFS.push(make_pair(i, j));
				check[i][j] = 1;
				tomato[i][j] = 0;
			}
		}
	}

	// BFS
	int max_day = 0;
	while (!BFS.empty()) {
		int tmp_i = BFS.front().first;
		int tmp_j = BFS.front().second;
		BFS.pop();

		for (int i = 0; i < 4; i++) {
			int move_i = tmp_i + di[i];
			int move_j = tmp_j + dj[i];

			if (move_i<1 || move_i>N) continue;
			else if (move_j<1 || move_j>M) continue;
			else if (box[move_i][move_j] == 0 && !check[move_i][move_j]) {
				box[move_i][move_j] = 1;
				tomato[move_i][move_j] = tomato[tmp_i][tmp_j] + 1;
				check[move_i][move_j] = 1;
				BFS.push(make_pair(move_i, move_j));

				if (tomato[move_i][move_j] > max_day)
					max_day = tomato[move_i][move_j];
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (box[i][j] == 0) {
				cout << -1 << '\n';
				return 0;
			}
		}
	}
	cout << max_day << endl;
}
