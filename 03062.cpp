#include <iostream>
using namespace std;

int reverse(int n) {
	int result = 0;
	while (n > 0) {
		result *= 10;
		result += n % 10;
		n /= 10;
	}

	return result;
}

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int N; cin >> N;

		int sum = N + reverse(N);
		if (sum == reverse(sum))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
