#include <iostream>
#include <queue>
using namespace std;

char cabage[50][50];	// input
char check[50][50];		// 방문 체크용
// int locate[50][50];		// 구역 세는용

int di[4] = { 1,0,-1,0 };
int dj[4] = { 0,1,0,-1 };

int N, M;

void BFS(int i, int j) {
	queue<pair<int, int>> B;
	B.push(make_pair(i, j));
	check[i][j] = 1;

	while (!B.empty()) {
		int tmp_i = B.front().first;
		int tmp_j = B.front().second;
		B.pop();

		for (int i = 0; i < 4; i++) {
			int move_i = tmp_i + di[i];
			int move_j = tmp_j + dj[i];

			if (move_i < 0 || move_i >= N) continue;
			else if (move_j < 0 || move_j >= M) continue;
			else if (cabage[move_i][move_j] && !check[move_i][move_j]) {
				B.push(make_pair(move_i, move_j));
				check[move_i][move_j] = 1;
			}
		}
	}
}

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int K; cin >> M >> N >> K;
		
		// init
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
				cabage[i][j] = check[i][j] =  0;

		// input
		for (int j = 0; j < K; j++) {
			int X, Y; cin >> X >> Y;
			cabage[Y][X] = 1;
		}

		// BFS
		int loc_cnt = 0;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (cabage[j][k] && !check[j][k]) {
					loc_cnt++;
					BFS(j, k);
				}
			}
		}

		cout << loc_cnt << endl;
	}
}
