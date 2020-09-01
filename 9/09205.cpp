#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

char check[100];	// 방문 체크

int dis(pair<int, int> p1, pair<int, int> p2) {
	return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		pair<int, int> house;
		vector<pair<int, int>> stores;
		pair<int, int> festival;

		// input
		int n; cin >> n;
		cin >> house.first >> house.second;

		for (int i = 0; i < n; i++) {
			int a, b; cin >> a >> b;
			stores.push_back(make_pair(a, b));
		}

		cin >> festival.first >> festival.second;

		// 바로 도착 가능한지 확인
		if (dis(house, festival) <= 1000) {
			cout << "happy\n";
			continue;
		}
		// BFS
		else {
			for (int i = 0; i < n; i++)
				check[i] = 0;

			queue<pair<int, int>> B;
			B.push(house);

			bool impossible = true;
			while (!B.empty()) {
				pair<int, int> tmp = B.front();
				B.pop();

				// 페스티벌 도착하면 종료
				if (dis(tmp, festival) <= 1000) {
					impossible = false;
					break;
				}
				// 아니면 BFS 돌리기
				for (int i = 0; i < stores.size(); i++) {
					if (!check[i] && dis(tmp, stores[i]) <= 1000) {
						B.push(stores[i]);
						check[i] = 1;
					}
				}
			}

			if (impossible) cout << "sad\n";
			else cout << "happy\n";
		}
	}
}
