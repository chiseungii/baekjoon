#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

// bool check[10000001];

int main() {
	int N; scanf("%d", &N);

	long long sum = 0;
	for (int i = 1; i < N; i++)
		sum += i;

	int a;
	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		sum -= a;
	}

	printf("%d\n", 0 - sum);
}
