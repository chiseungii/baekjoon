#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

struct compare {
	bool operator()(int a, int b) {
		if (abs(a) == abs(b)) return a > b;
		return abs(a) > abs(b);
	}
};

int main() {
	int N; scanf("%d", &N);	// 연산의 개수
	priority_queue<int, vector<int>, compare> heap;	// 최대 힙

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
