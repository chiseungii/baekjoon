#include <iostream>
#include <queue>
using namespace std;

char check[300][300];	// 방문 체크용
int dis[300][300];		// 거리 재는용

int di[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dj[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

int I;

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		// input
		cin >> I;
		int start_i, start_j, end_i, end_j;
		cin >> start_i >> start_j >> end_i >> end_j;

		// 출발점과 도착점이 같을 때
		if (start_i == end_i && start_j == end_j) {
			cout << 0 << endl;
			continue;
		}
		
		// init
		for (int i = 0; i < I; i++)
			for (int j = 0; j < I; j++)
				check[i][j] = dis[i][j] = 0;

		// BFS
		queue<pair<int, int>> B;
		B.push(make_pair(start_i, start_j));
		check[start_i][start_j] = 1;

		while (!B.empty()) {
			int tmp_i = B.front().first;
			int tmp_j = B.front().second;
			B.pop();

			bool arrived = false;
			for (int i = 0; i < 8; i++) {
				int move_i = tmp_i + di[i];
				int move_j = tmp_j + dj[i];

				// 도착하면 바로 종료
				if (move_i == end_i && move_j == end_j) {
					arrived = true;
					dis[move_i][move_j] = dis[tmp_i][tmp_j] + 1;
					break;
				}

				if (move_i < 0 || move_i >= I) { continue; }
				else if (move_j < 0 || move_j >= I) { continue; }
				else if (!check[move_i][move_j]) {
					B.push(make_pair(move_i, move_j));
					dis[move_i][move_j] = dis[tmp_i][tmp_j] + 1;
					check[move_i][move_j] = 1;
				}
			}

			if (arrived) break;
		}

		cout << dis[end_i][end_j] << endl;
	}
}
