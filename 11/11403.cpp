#include <iostream>
#include <queue>
using namespace std;

int connect[101][101];	// input
char check[101];		// 방문 체크용

int N;

bool BFS(int start, int end) {
	// if (start == end) return true;

	// init
	for (int i = 1; i <= N; i++)
		check[i] = 0;

	// BFS
	queue<int> B;
	B.push(start);
	// check[start] = 1;

	while (!B.empty()) {
		int tmp = B.front();
		B.pop();

		for (int i = 1; i <= N; i++) {
			if (connect[tmp][i]) {
				if (i == end) return true;
				else if (!check[i]) {
					B.push(i);
					check[i] = 1;
				}
			}
			if (connect[tmp][i] && !check[i]) {
				if (i == end) return true;
				B.push(i);
				check[i] = 1;
			}
		}
	}

	return false;
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			cin >> connect[i][j];

	// print
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cout << BFS(i, j) << ' ';
		}
		cout << '\n';
	}
}
