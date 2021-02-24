/*
priority queue
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N; scanf("%d", &N);	// 연산의 개수
	priority_queue<int> heap;	// 최대 힙

	for (int i = 0; i < N; i++) {
		int x; scanf("%d", &x);

		if (x == 0) {
			if (heap.empty()) printf("0\n");
			else {
				printf("%d\n", heap.top());
				heap.pop();
			}
		}
		else heap.push(x);
	}
}
