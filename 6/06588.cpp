#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

char prime[1000001];

int main() {
	// 에라토스테네스의 체
	fill_n(prime, 1000001, 1);
	for (int i = 2; i < 1000001; i++)
		if (prime[i])
			for (int j = i * 2; j < 1000001; j += i)
				prime[j] = 0;

	// 테케 반복
	while (1) {
		// input
		int n; scanf("%d", &n);
		if (!n) break;

		// 합 구하기
		for (int i = 2; i <= 1000001; i++) {
			if (prime[i] && prime[n - i]) {
				printf("%d = %d + %d\n", n, i, n - i);
				break;
			}
		}
	}
}
