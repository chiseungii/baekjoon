#include <iostream>
#include <stack>
#include <queue>
using namespace std;

char nodes[1001][1001];
char check[1001];

int main() {
	int N, M, V; cin >> N >> M >> V;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			nodes[i][j] = 0;

	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		nodes[a][b] = nodes[b][a] = 1;
	}

	// DFS
	for (int i = 1; i <= N; i++)
		check[i] = 0;

	stack<int> DFS;
	DFS.push(V);
	cout << V << ' ';
	while (!DFS.empty()) {
		int tmp = DFS.top();
		check[tmp] = 1;

		bool finish = true;
		for (int i = 1; i <= N; i++) {
			if (nodes[tmp][i] && !check[i]) {
				DFS.push(i);
				cout << i << ' ';

				finish = false;
				break;
			}
		}

		if (finish) DFS.pop();
	}
	cout << endl;

	// BFS
	for (int i = 1; i <= N; i++)
		check[i] = 0;

	queue<int> BFS;
	BFS.push(V);
	check[V] = 1;
	while (!BFS.empty()) {
		int tmp = BFS.front();
		BFS.pop();
		cout << tmp << ' ';

		for (int i = 1; i <= N; i++) {
			if (nodes[tmp][i] && !check[i]) {
				BFS.push(i);
				check[i] = 1;
			}
		}
	}
}
