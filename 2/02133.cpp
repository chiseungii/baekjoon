#include <iostream>
using namespace std;

int DP[31];

int main() {
	int N; cin >> N;

	DP[0] = 1; DP[2] = 3;
	for (int i = 4; i <= N; i += 2) {
		DP[i] = DP[i - 2] * 3;
		for (int j = 4; j <= i; j += 2)
			DP[i] += DP[i - j] * 2;
	}

	cout << DP[N] << endl;
}
