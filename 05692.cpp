#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
using namespace std;

int base[5] = { 1,2,6,24,120 };

int main() {
	while (1) {
		int n; scanf("%d", &n);
		if (!n) break;

		int factorial = 0;
		int result = 0;
		while (n) {
			result += ((n % 10) * base[factorial]);
			factorial++;
			n /= 10;
		}

		printf("%d\n", result);
	}
}
