#include <iostream>
#include <queue>
using namespace std;

#define PARENT 1
#define CHILD 2

int graph[101][101];	// 관계 기록
int chon[101];			// 촌수 계산
char check[101];		// 방문 체크

int N;

int BFS(int n, int m) {
	if (n == m) return 0;

	queue<int> B;
	B.push(n);
	check[n] = 1;
	chon[n] = 0;

	while (!B.empty()) {
		int tmp = B.front();
		B.pop();

		for (int i = 1; i <= N; i++) {
			if ((graph[tmp][i] == PARENT || graph[tmp][i] == CHILD) && !check[i]) {
				if (i == m) return chon[tmp] + 1;

				B.push(i);
				check[i] = 1;
				chon[i] = chon[tmp] + 1;
			}
		}
	}

	return -1;
}

int main() {
	// input
	cin >> N;
	int a, b, m;
	cin >> a >> b;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;

		graph[x][y] = CHILD;
		graph[y][x] = PARENT;
	}

	// BFS & print
	cout << BFS(a, b) << endl;
}
