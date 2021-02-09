#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
using namespace std;

int* cards;
int N;

int upper_binary(int n) {
	int left, right, mid;
	left = 0; right = N - 1;

	while (right > left) {
		mid = (left + right) / 2;

		if (cards[mid] > n)
			right = mid;
		else left = mid + 1;
	}

	return right;
}

int lower_binary(int n) {
	int left, right, mid;
	left = 0; right = N - 1;

	while (right > left) {
		mid = (left + right) / 2;

		if (cards[mid] >= n)
			right = mid;
		else left = mid + 1;
	}

	return right;
}

int main() {
	scanf("%d", &N);	// 숫자 카드 개수
	cards = new int[N];				// 카드 개수만큼 동적 할당

	for (int i = 0; i < N; i++)
		scanf("%d", &cards[i]);
	// 숫자 카드 정렬
	stable_sort(cards, cards + N);

	int M; scanf("%d", &M);	// 정수 개수

	for(int i=0; i<M; i++) {
		int n; scanf("%d", &n);

		int upper = upper_binary(n);
		int lower = lower_binary(n);
		if (upper == N - 1 && cards[upper] == n) upper++;

		printf("%d ", upper - lower);
	}
	printf("\n");

	delete[] cards;
}
