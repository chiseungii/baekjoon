#include <iostream>
#include <queue>
using namespace std;

char graph[101][101];	// input
char check[101];		// 방문 체크
int dis[101];			// 케빈 베이컨 단계 체크
int kevin[101];			// 케빈 베이컨 수 기록

int N;

int BFS(int a) {
	queue<int> B;
	B.push(a);
	check[a] = 1;

	while (!B.empty()) {
		int tmp = B.front();
		B.pop();

		for (int i = 1; i <= N; i++) {
			if (graph[tmp][i] && !check[i]) {
				B.push(i);
				check[i] = 1;
				dis[i] = dis[tmp] + 1;
			}
		}
	}

	int dis_sum = 0;
	for (int i = 1; i <= N; i++)
		dis_sum += dis[i];
	
	return dis_sum;
}

int main() {
	// input
	int M; cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int A, B; cin >> A >> B;
		graph[A][B] = graph[B][A] = 1;
	}

	// BFS
	for (int i = 1; i <= N; i++) {
		// init
		for (int j = 1; j <= N; j++)
			check[j] = dis[j] = 0;

		// 결과 기록
		kevin[i] = BFS(i);
	}

	// print
	int min_kevin = kevin[1], min_num = 1;
	for (int i = 2; i <= N; i++) {
		if (kevin[i] < min_kevin) {
			min_kevin = kevin[i];
			min_num = i;
		}
	}

	cout << min_num << endl;
}
