#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N; scanf("%d", &N);	// 명령의 수
	deque<int> q;		// 덱

	char str[10];	// 입력용

	for (int i = 0; i < N; i++) {
		scanf("%s", str);
		string op = str;	// 명령어

		if (op == "push") {
			int X; scanf("%d", &X);	// 정수
			q.push_back(X);
		}
		else if (op == "pop") {
			// 비어있으면 -1
			if (q.empty()) printf("-1\n");
			else {
				printf("%d\n", q.front());
				q.pop_front();
			}
		}
		else if (op == "size") printf("%d\n", q.size());
		else if (op == "empty") printf("%d\n", q.empty());
		else if (op == "front") {
			// 비어있으면 -1
			if (q.empty()) printf("-1\n");
			else printf("%d\n", q.front());
		}
		else {
			// 비어있으면 -1
			if (q.empty()) printf("-1\n");
			else printf("%d\n", q.back());
		}
	}
}
