#include <iostream>
#include <queue>
using namespace std;

int map[50][50];	// input
char check[50][50];	// 방문 체크용

int h, w;

int di[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
int dj[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

void BFS(int a, int b) {
	queue<pair<int, int>> B;
	B.push(make_pair(a, b));
	check[a][b] = 1;

	while (!B.empty()) {
		int tmp_i = B.front().first;
		int tmp_j = B.front().second;
		B.pop();

		for (int i = 0; i < 8; i++) {
			int move_i = tmp_i + di[i];
			int move_j = tmp_j + dj[i];

			if (move_i < 0 || move_i >= h) { continue; }
			else if (move_j < 0 || move_j >= w) { continue; }
			else if (map[move_i][move_j] && !check[move_i][move_j]) {
				B.push(make_pair(move_i, move_j));
				check[move_i][move_j] = 1;
			}
		}
	}
}

int main() {
	while (1) {
		cin >> w >> h;
		if (!w && !h) break;

		// init
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				check[i][j] = 0;

		// input
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> map[i][j];

		// BFS
		int cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] && !check[i][j]) {
					cnt++;
					BFS(i, j);
				}
			}
		}

		cout << cnt << endl;
	}
}
