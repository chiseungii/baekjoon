#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define INF 2147483647

int main() {
	int N; cin >> N;

	vector<int> DP = { 0,0 };
	for (int i = 2; i <= N; i++) {
		int cnt[3];

		// 1. 3으로 나누어 떨어지면 3으로 나눔
		if (i % 3 == 0) cnt[0] = DP[i / 3] + 1;
		else cnt[0] = INF;

		// 2. 2로 나누어 떨어지면 2로 나눔
		if (i % 2 == 0) cnt[1] = DP[i / 2] + 1;
		else cnt[1] = INF;

		// 3. 1을 뺌
		cnt[2] = DP[i - 1] + 1;

		DP.push_back(min(min(cnt[0], cnt[1]), cnt[2]));
	}

	cout << DP[N] << endl;
}
