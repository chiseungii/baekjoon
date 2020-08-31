#include <iostream>
#include <queue>
using namespace std;

char friends[501][501];	// input
char check[501];		// 방문 체크
int depth[501];			// 몇 단계 친구인지

int N;

int main() {
	// input
	cin >> N;
	int m; cin >> m;

	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		friends[a][b] = friends[b][a] = 1;
	}

	// BFS
	queue<int> B;
	B.push(1);
	check[1] = 1;
	depth[1] = 0;

	while (!B.empty()) {
		int tmp = B.front();
		B.pop();

		for (int i = 1; i <= N; i++) {
			if (friends[tmp][i] && !check[i]) {
				B.push(i);
				check[i] = 1;
				depth[i] = depth[tmp] + 1;
			}
		}
	}

	// depth = 1: 친구, depth = 2: 친구의 친구
	int cnt_visit = 0;
	for (int i = 2; i <= N; i++)
		if (depth[i] == 1 || depth[i] == 2)
			cnt_visit++;

	cout << cnt_visit << endl;
}
