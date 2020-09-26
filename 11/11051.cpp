#include <iostream>
using namespace std;

#define MOD 10007

int DP[1001][1001];

int main() {
	int N, K; cin >> N >> K;

	DP[1][0] = DP[1][1] = 1;
	for (int i = 2; i <= N; i++) {
		DP[i][0] = DP[i][i] = 1;
		for (int j = 1; j < N; j++)
			DP[i][j] = (DP[i - 1][j] + DP[i - 1][j - 1]) % MOD;
	}

	cout << DP[N][K] << endl;
}
