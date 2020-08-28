#include <iostream>
#include <queue>
using namespace std;

int map[100][100];		// input
char rain[100][100];	// 잠겼는지 아닌지 여부 체크
char check[100][100];	// 방문 체크용

int di[4] = { 1, 0, -1, 0 };
int dj[4] = { 0, 1, 0, -1 };

int N;

void BFS(int a, int b) {
	queue<pair<int, int>> B;
	B.push(make_pair(a, b));
	check[a][b] = 1;
	while (!B.empty()) {
		int tmp_i = B.front().first;
		int tmp_j = B.front().second;
		B.pop();

		for (int i = 0; i < 4; i++) {
			int move_i = tmp_i + di[i];
			int move_j = tmp_j + dj[i];

			if (move_i < 0 || move_i >= N) { continue; }
			else if (move_j < 0 || move_j >= N) { continue; }
			else if (rain[move_i][move_j] && !check[move_i][move_j]) {
				B.push(make_pair(move_i, move_j));
				check[move_i][move_j] = 1;
			}
		}
	}
}

int main() {
	cin >> N;	int max_height = 0;
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			if (map[i][j] > max_height)
				max_height = map[i][j];
		}
	}

	int max = 1;
	for (int rain_height = 1; rain_height <= max_height; rain_height++) {
		// 잠긴 부분 체크
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (map[i][j] <= rain_height)
					rain[i][j] = 0;
				else rain[i][j] = 1;

		// init
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				check[i][j] = 0;

		// 안전 구역 체크
		int safe = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (rain[i][j] && !check[i][j]) {
					safe++;
					BFS(i, j);
				}
			}
		}

		if (safe > max) max = safe;
	}

	cout << max << endl;
}
