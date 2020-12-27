#include <iostream>
using namespace std;

int carry(long long a, long long b) {
	int cnt = 0, c = 0;
	while (a || b) {
		int tmp = a % 10 + b % 10 + c;
		a /= 10; b /= 10;

		c = tmp / 10;
		cnt += c;
	}

	return cnt;
}

int main() {
	while (1) {
		long long a, b;
		cin >> a >> b;

		if (!a && !b) break;

		cout << carry(a, b) << endl;
	}
}
