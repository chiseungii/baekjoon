#include <iostream>
using namespace std;

int DP[501];

int len(int n) {
	int result = 1;
	while (n > 0) {
		result *= 10;
		n /= 10;
	}

	return result;
}

int main() {
	// input
	int N; cin >> N;

	// init
	DP[1] = 0;
	int fact = 1;

	// DP
	for (int i = 2; i <= N; i++) {
		fact *= i;
		int mod = len(i);

		DP[i] = DP[i - 1];
		while (fact % 10 == 0) {
			DP[i]++;
			fact /= 10;
		}
		fact %= mod;
	}

	// print
	cout << DP[N] << endl;
}
