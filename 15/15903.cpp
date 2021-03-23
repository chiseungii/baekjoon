#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n; cin >> n;	// 카드의 개수
	int m; cin >> m;	// 카드 합체 횟수

	priority_queue<long long, vector<long long>, greater<long long>> cards;	// 우선순위 큐

	for (int i = 0; i < n; i++) {
		long long a; cin >> a;
		cards.push(a);
	}

	for (int i = 0; i < m; i++) {
		// 제일 작은 두 개 꺼냄
		long long a = cards.top();
		cards.pop();
		long long b = cards.top();
		cards.pop();

		// 두 수를 더한 정수 두 개 넣음
		cards.push(a + b);
		cards.push(a + b);
	}

	long long sum = 0;	// 최종 점수
	while (!cards.empty()) {
		sum += cards.top();
		cards.pop();
	}

	cout << sum << endl;
}
