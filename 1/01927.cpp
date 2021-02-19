#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int N; scanf("%d", &N);	// 연산의 개수
	priority_queue<int, vector<int>, greater<int>> q;	// 최소 힙

	for (int i = 0; i < N; i++) {
		int x; scanf("%d", &x);

		if (x == 0) {
			if (q.empty()) printf("0\n");
			else {
				printf("%d\n", q.top());
				q.pop();
			}
		}
		else q.push(x);
	}
}
