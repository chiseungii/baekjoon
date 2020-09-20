#include <iostream>
using namespace std;

long long DP[101];

int main() {
	DP[1] = DP[2] = DP[3] = 1;
	for (int i = 4; i < 101; i++)
		DP[i] = DP[i - 3] + DP[i - 2];

	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;
		cout << DP[N] << endl;
	}
}
