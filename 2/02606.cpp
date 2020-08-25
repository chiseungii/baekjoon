#include <iostream>
#include <queue>
using namespace std;

char graph[101][101];	// 연결 상태 기록
char virus[101];	// 감염 여부
char check[101];	// 방문 체크용

int main() {
	int N; cin >> N;	// 컴퓨터 수
	int nodes; cin >> nodes;	// 간선 수
	for (int i = 0; i < nodes; i++) {
		int a, b; cin >> a >> b;
		graph[a][b] = graph[b][a] = 1;
	}

	queue<int> BFS;
	BFS.push(1);
	virus[1] = check[1] = 1;
	while (!BFS.empty()) {
		int tmp = BFS.front();
		BFS.pop();

		for (int i = 1; i <= N; i++) {
			if (graph[tmp][i] && !check[i]) {
				BFS.push(i);
				virus[i] = check[i] = 1;
			}
		}
	}

	int cnt = 0;
	for (int i = 2; i <= N; i++)
		if (virus[i]) cnt++;

	cout << cnt << endl;
}
