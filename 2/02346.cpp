#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N; cin >> N;	// 풍선 개수
	deque<pair<int, int>> balloons;	// <번호, 넘버>

	for (int i = 0; i < N; i++) {
		int balloon; cin >> balloon;
		balloons.push_back(make_pair(i + 1, balloon));
	}

	while (!balloons.empty()) {
		pair<int, int> tmp = balloons.front();
		balloons.pop_front();
		cout << tmp.first << ' ';

		if (balloons.empty()) break;

		if (tmp.second > 0) {
			for (int i = 0; i < tmp.second - 1; i++) {
				balloons.push_back(balloons.front());
				balloons.pop_front();
			}
		}
		else {
			for (int i = 0; i < -tmp.second; i++) {
				balloons.push_front(balloons.back());
				balloons.pop_back();
			}
		}
	}
	cout << endl;
}
