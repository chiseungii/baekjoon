#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N;

	vector<vector<int>> DP;	// 연속, 건너뜀
	DP.push_back({ 0, 0 });
	for (int i = 1; i <= N; i++) {
		// 첫번째 계단
		if (i == 1) {
			int a; cin >> a;
			DP.push_back({ a, a });
		}
		// 나머지 계단
		else {
			int a; cin >> a;

			// 연속
			int tmp1 = DP[i - 1][1] + a;
			// 건너뜀
			int tmp2 = max(DP[i - 2][0], DP[i - 2][1]) + a;

			DP.push_back({ tmp1, tmp2 });
		}
	}

	cout << max(DP[N][0], DP[N][1]) << endl;
}
