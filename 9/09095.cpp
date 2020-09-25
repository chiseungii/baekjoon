#include <iostream>
using namespace std;

int num[3][11];

int DP(int n) {
	if (n == 1) return 1;

	num[0][0] = num[1][0] = num[2][0] = 1;
	for (int i = 1; i <= n; i++) {
		num[0][i] = 1;

		if (i < 2) num[1][i] = num[0][i];
		else num[1][i] = num[1][i - 1] + num[1][i - 2];

		if (i < 3) num[2][i] = num[1][i];
		else num[2][i] = num[2][i - 1] + num[2][i - 2] + num[2][i - 3];
	}

	return num[2][n];
}

int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int n; cin >> n;
		cout << DP(n) << endl;
	}
}
