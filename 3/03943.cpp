#define _CRT_SECURE_NO_WARNINGS;

#include <iostream>
#include <algorithm>
using namespace std;

int DP[100001];

void makeDP() {
	DP[1] = 1;
	for (int i = 2; i < 100001; i++) {
		if (i % 2 == 0) DP[i] = max(i, DP[i / 2]);
		else {
			int tmp = i * 3 + 1;
			int max_tmp = tmp;
			while (tmp > i) {
				if (tmp % 2 == 0) tmp /= 2;
				else tmp = tmp * 3 + 1;

				if (tmp > max_tmp) max_tmp = tmp;
			}

			DP[i] = max(DP[tmp], max_tmp);
		}
	}
}

int main() {
	int T; cin >> T;

	makeDP();
	for (int i = 0; i < T; i++) {
		int n; scanf("%d", &n);
		printf("%d\n", DP[n]);
	}
}
