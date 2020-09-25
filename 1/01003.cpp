#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> DP;	// 0의 개수, 1의 개수

void make_DP() {
	DP.push_back(make_pair(1, 0));
	DP.push_back(make_pair(0, 1));

	for (int i = 2; i <= 40; i++) {
		int first = DP[i - 1].first + DP[i - 2].first;
		int second = DP[i - 1].second + DP[i - 2].second;
		DP.push_back(make_pair(first, second));
	}
}

int main() {
	int T; cin >> T;

	make_DP();
	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;
		printf("%d %d\n", DP[N].first, DP[N].second);
	}
}
