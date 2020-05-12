#include <iostream>
using namespace std;

int toOctal(int n) {
	int base = 1, result = 0;
	while (n > 0) {
		int a = n % 10;
		if (a >= 8) return 0;

		result += (a * base);
		base *= 8;
		n /= 10;
	}

	return result;
}

int toHexa(int n) {
	int base = 1, result = 0;
	while (n > 0) {
		int a = n % 10;
		result += (a * base);
		base *= 16;
		n /= 10;
	}

	return result;
}

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int K, num; cin >> K >> num;

		cout << K << ' ' << toOctal(num) << ' ' << num << ' ' << toHexa(num) << endl;
	}
}
