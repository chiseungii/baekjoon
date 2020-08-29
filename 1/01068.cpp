#include <iostream>
#include <queue>
using namespace std;

char graph[50][50];	// input
char check[50];		// 방문 체크

int main() {
	// input
	int N, root;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a; cin >> a;

		if (a == -1) root = i;
		else graph[a][i] = 1;
	}

	int except_node; cin >> except_node;

	// root 노드가 삭제될 경우
	if (root == except_node) { cout << 0 << endl; }
	else {
		// BFS
		queue<int> B;
		B.push(root);
		check[root] = check[except_node] = 1;

		int leaves = 0;
		while (!B.empty()) {
			int tmp = B.front();
			B.pop();

			bool isLeaf = true;
			for (int i = 0; i < N; i++) {
				if (graph[tmp][i] && !check[i]) {
					isLeaf = false;
					B.push(i);
					check[i] = 1;
				}
			}

			if (isLeaf) leaves++;
		}

		// print
		cout << leaves << endl;
	}
}
