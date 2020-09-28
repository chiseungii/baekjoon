#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
	return p1.first < p2.first;
}

int main() {
	// input
	int N; cin >> N;

	vector<pair<int, int>> line;	// A, B
	for (int i = 0; i < N; i++) {
		int a, b; cin >> a >> b;
		line.push_back(make_pair(a, b));
	}
	sort(line.begin(), line.end(), compare);

	// 정렬 후 B에 연결된 넘버들로 LIS
	vector<int> DP;
	for (int i = 0; i < line.size(); i++) {
		int max_DP = -1, LIS = 1;
		for (int j = i - 1; j >= 0; j--) {
			if (line[j].second<line[i].second && DP[j]>max_DP) {
				max_DP = DP[j];
				LIS = DP[j] + 1;
			}
		}
		DP.push_back(LIS);
	}

	cout << N - *max_element(DP.begin(), DP.end()) << endl;
}
