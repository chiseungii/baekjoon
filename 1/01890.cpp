#include <iostream>
using namespace std;

int board[100][100];
long long DP[100][100];

int N;

int di[2] = { 1, 0 };
int dj[2] = { 0, 1 };

long long DFS(int i, int j) {
	if (i == N - 1 && j == N - 1)
		return 1;

	if (DP[i][j] == -1) {
		DP[i][j] = 0;
		int jump = board[i][j];
		for (int k = 0; k < 2; k++) {
			int move_i = i + di[k] * jump;
			int move_j = j + dj[k] * jump;

			if (move_i < 0 || move_i >= N) continue;
			else if (move_j < 0 || move_j >= N) continue;
			else DP[i][j] += DFS(move_i, move_j);
		}
	}

	return DP[i][j];
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> board[i][j];
			DP[i][j] = -1;
		}
	}

	cout << DFS(0, 0) << endl;
}
