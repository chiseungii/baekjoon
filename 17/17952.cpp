#include <iostream>
#include <map>
#include <vector>
#include <deque>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	int N; cin >> N;	// 학기는 N분
	int score = 0;	// 최종 점수
	stack<pair<int, int>> tasks;	// <점수, 걸리는 시간(분)>
	
	for (int i = 1; i <= N + 1; i++) {
		// 하던 일 마저 하기
		if (!tasks.empty()) {
			tasks.top().second--;
			if (tasks.top().second == 0) {
				score += tasks.top().first;
				tasks.pop();
			}
		}

		// 제일 끝 시간은 입력 없음
		if (i == N + 1) continue;

		int op; cin >> op;

		// 과제 있으면 체크
		if (op == 1) {
			int A; cin >> A;	// 만점
			int T; cin >> T;	// 걸리는 시간(분)

			tasks.push(make_pair(A, T));
		}
	}

	cout << score << endl;
}
