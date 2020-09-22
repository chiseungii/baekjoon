#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}

	while (b) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}

	return a;
}

int main() {
	int A_up, A_down, B_up, B_down;
	cin >> A_up >> A_down >> B_up >> B_down;

	// 통분
	A_up *= B_down;
	B_up *= A_down;
	A_down = B_down = A_down * B_down;

	// 합
	A_up += B_up;

	// 최대공약수로 나눠줌
	int g = gcd(A_up, A_down);
	A_up /= g;
	A_down /= g;

	// print
	printf("%d %d\n", A_up, A_down);
}
