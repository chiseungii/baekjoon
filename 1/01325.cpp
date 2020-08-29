#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> graph[10001];	// input
char check[10001];			// 방문 체크
int hack_cnt[10001];		// 해킹 수 기록

int N;

int BFS(int a) {
	// init
	for (int i = 1; i <= N; i++)
		check[i] = 0;

	// BFS
	queue<int> B;
	B.push(a);
	check[a] = 1;
	int cnt = 1;

	while (!B.empty()) {
		int tmp = B.front();
		B.pop();

		for (int i = 0; i < graph[tmp].size(); i++) {
			int next = graph[tmp][i];
			if (!check[next]) {
				B.push(next);
				check[next] = 1;
				cnt++;
			}
		}
	}

	return cnt;
}

int main() {
	// input
	int M; scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		int A, B; scanf("%d %d", &A, &B);
		graph[B].push_back(A);
	}

	// BFS
	int max_hack = 0;
	for (int i = 1; i <= N; i++) {
		int hacks = BFS(i);
		hack_cnt[i] = hacks;

		if (hacks > max_hack) max_hack = hacks;
	}

	// print
	for (int i = 1; i <= N; i++)
		if (hack_cnt[i] == max_hack)
			printf("%d ", i);
	printf("\n");
}
