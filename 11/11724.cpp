#include <iostream>
#include <queue>
using namespace std;

char connect[1001][1001];	// input
char check[1001];			// 방문 체크용

int N, M;

void BFS(int n) {
	queue<int> B;
	B.push(n);
	check[n] = 1;

	while (!B.empty()) {
		int tmp = B.front();
		B.pop();

		for (int i = 1; i <= N; i++) {
			if (connect[tmp][i] && !check[i]) {
				B.push(i);
				check[i] = 1;
			}
		}
	}
}

int main() {
	cin >> N >> M;

	// init
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			connect[i][j] = 0;
		check[i] = 0;
	}

	// input
	for (int i = 0; i < M; i++) {
		int u, v; cin >> u >> v;
		connect[u][v] = connect[v][u] = 1;
	}

	// BFS
	int connect_cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (!check[i]) {
			connect_cnt++;
			BFS(i);
		}
	}

	cout << connect_cnt << endl;
}
