#include <iostream>
using namespace std;

#define MOD 1000000000

int DP[201][202];

int main() {
	int N, K; cin >> N >> K;

	for (int i = 1; i <= K; i++)
		DP[0][i] = 1;

	for (int i = 1; i <= N; i++) {
		DP[i][1] = 1;
		for (int j = 2; j <= K; j++) {
			long long sum = 0;
			for (int k = 0; k <= i; k++) {
				sum += DP[i - k][j - 1];
				sum %= MOD;
			}
			DP[i][j] = sum;
		}
	}

	cout << DP[N][K] << endl;
}
