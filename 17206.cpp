#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

long long DP[80001];

int main() {
	DP[10] = 25;
	for (int i = 11; i < 80001; i++) {
		if (i % 3 == 0 || i % 7 == 0)
			DP[i] = DP[i - 1] + i;
		else DP[i] = DP[i - 1];
	}

	int T; scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int N; scanf("%d", &N);
		printf("%d\n", DP[N]);
	}
}
