#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
using namespace std;

int V[101];
bool DP[101][1001];

int N, S, M;

int main() {
	cin >> N >> S >> M;
	for (int i = 1; i <= N; i++)
		scanf("%d", &V[i]);

	DP[0][S] = true;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= M; j++) {
			if (DP[i - 1][j]) {
				// -
				int tmp = j - V[i];
				if (tmp >= 0) DP[i][tmp] = true;

				// +
				tmp = j + V[i];
				if (tmp <= M) DP[i][tmp] = true;
			}
		}
	}

	for (int i = M; i >= 0; i--) {
		if (DP[N][i]) {
			printf("%d\n", i);
			return 0;
		}
	}

	printf("-1\n");
}
