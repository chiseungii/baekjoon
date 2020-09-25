#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N;

	vector<vector<int>> DP;
	DP.push_back({ 0, 0, 0 });
	for (int i = 1; i <= N; i++) {
		int R, G, B; cin >> R >> G >> B;

		vector<int> tmp = DP[i - 1];
		R += min(tmp[1], tmp[2]);
		G += min(tmp[0], tmp[2]);
		B += min(tmp[0], tmp[1]);

		DP.push_back({ R,G,B });
	}

	cout << *min_element(DP[N].begin(), DP[N].end()) << endl;
}
