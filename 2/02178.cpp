#include <iostream>
#include <queue>
using namespace std;

char map[102][102];			// input 읽음
int dis[101][101];			// 거리 재기
char check[101][101];		// 중복 체크용

int main() {
	int N, M; cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> map[i][j];
			map[i][j] -= '0';
		}
	}

	// init
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			check[i][j] = 0;

	dis[1][1] = 1;

	// BFS
	queue<pair<int, int>> BFS;
	int di[4] = { 1,0,-1,0 };
	int dj[4] = { 0,1,0,-1 };

	BFS.push(make_pair(1, 1));
	check[1][1] = 1;
	while (!BFS.empty()) {
		int i = BFS.front().first;
		int j = BFS.front().second;
		if (i == N && j == M) break;

		BFS.pop();
		int d = dis[i][j];

		for (int k = 0; k < 4; k++) {
			int tmp_i = i + di[k];
			int tmp_j = j + dj[k];
			if (map[tmp_i][tmp_j] && !check[tmp_i][tmp_j]) {
				BFS.push(make_pair(tmp_i, tmp_j));
				dis[tmp_i][tmp_j] = d + 1;
				check[tmp_i][tmp_j] = 1;
			}
		}
	}

	cout << dis[N][M] << endl;
}
