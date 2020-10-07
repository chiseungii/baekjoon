#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int num[1025][1025];

int main() {
	int N, M; cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			int a; scanf("%d", &a);
			num[i][j] = num[i - 1][j] + num[i][j - 1] + a - num[i - 1][j - 1];
		}
	}

	for (int m = 0; m < M; m++) {
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		printf("%d\n", num[x2][y2] - num[x2][y1 - 1] - num[x1 - 1][y2] + num[x1 - 1][y1 - 1]);
	}
}
