#include <iostream>
using namespace std;

int DP[15][15];

int main() {
	int N, M, K; cin >> N >> M >> K;

	if (K == 0) {
		for (int j = 0; j < M; j++)
			DP[0][j] = 1;
		for (int i = 1; i < N; i++) {
			DP[i][0] = DP[i - 1][0];
			for (int j = 1; j < M; j++)
				DP[i][j] = DP[i - 1][j] + DP[i][j - 1];
		}
	}
	else {
		int index_i = (K - 1) / M;
		int index_j = (K - 1) % M;

		// 제일 윗줄
		for (int j = 0; j <= index_j; j++)
			DP[0][j] = 1;
		// 나머지
		for (int i = 1; i <= index_i; i++) {
			DP[i][0] = DP[i - 1][0];
			for (int j = 1; j <= index_j; j++)
				DP[i][j] = DP[i][j - 1] + DP[i - 1][j];
		}
		// 마지막 경로까지
		for (int j = index_j + 1; j < M; j++)
			DP[index_i][j] = DP[index_i][index_j];
		for (int i = index_i + 1; i < N; i++) {
			DP[i][index_j] = DP[i - 1][index_j];
			for (int j = index_j + 1; j < M; j++)
				DP[i][j] = DP[i][j - 1] + DP[i - 1][j];
		}
	}

	cout << DP[N - 1][M - 1] << endl;
}
