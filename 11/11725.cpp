#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> graph[100001];	// input
char check[100001];			// 방문 체크
int parents[100001];		// 부모 노드 기록

int N;

int main() {
	// input
	scanf("%d", &N);
	for (int i = 0; i < N - 1; i++) {
		int a, b; scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	// BFS
	queue<int> B;
	B.push(1);
	check[1] = 1;

	while (!B.empty()) {
		int tmp = B.front();
		B.pop();

		for (int i = 0; i < graph[tmp].size(); i++) {
			int next = graph[tmp][i];
			if (!check[next]) {
				B.push(next);
				check[next] = 1;
				parents[next] = tmp;
			}
		}
	}

	// print
	for (int i = 2; i <= N; i++)
		printf("%d\n", parents[i]);
}
