#include <iostream>
using namespace std;

int map[500][500];
int DP[500][500];

int di[4] = { 1, 0, -1, 0 };
int dj[4] = { 0, 1, 0, -1 };

int M, N;

int DFS(int i, int j) {
	if (i == M - 1 && j == N - 1)
		return 1;

	if (DP[i][j] == -1) {
		DP[i][j] = 0;
		for (int k = 0; k < 4; k++) {
			int move_i = i + di[k];
			int move_j = j + dj[k];

			if (move_i < 0 || move_i >= M) continue;
			else if (move_j < 0 || move_j >= N) continue;
			else if (map[move_i][move_j] < map[i][j])
				DP[i][j] += DFS(move_i, move_j);
		}
	}

	return DP[i][j];
}

int main() {
	// input
	cin >> M >> N;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			cin >> map[i][j];

	// init
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			DP[i][j] = -1;

	// DFS & print
	cout << DFS(0, 0) << endl;
}
