#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

char paper[100][100];	// input
char check[100][100];	// 방문 체크용
int locate[100][100];		// 구역 기록
int loc_cnt[5000];		// 구역 카운트

int di[4] = { 1, 0, -1, 0 };
int dj[4] = { 0, 1, 0, -1 };

int M, N;
int loc_num = 0;

void BFS(int a, int b) {
	queue<pair<int, int>> B;
	B.push(make_pair(a, b));
	check[a][b] = 1;
	locate[a][b] = loc_num;

	while (!B.empty()) {
		int tmp_i = B.front().first;
		int tmp_j = B.front().second;
		B.pop();

		for (int i = 0; i < 4; i++) {
			int move_i = tmp_i + di[i];
			int move_j = tmp_j + dj[i];

			if (move_i < 0 || move_i >= M) { continue; }
			else if (move_j < 0 || move_j >= N) { continue; }
			else if (!paper[move_i][move_j] && !check[move_i][move_j]) {
				B.push(make_pair(move_i, move_j));
				check[move_i][move_j] = 1;
				locate[move_i][move_j] = loc_num;
			}
		}
	}
}

int main() {
	int K; cin >> N >> M >> K;
	
	// input
	for (int i = 0; i < K; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = x1; j < x2; j++)
			for (int k = y1; k < y2; k++)
				paper[j][k] = 1;
	}

	// BFS
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (!paper[i][j] && !check[i][j]) {
				loc_num++;
				BFS(i, j);
			}
		}
	}

	// 구역 카운팅
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (locate[i][j])
				loc_cnt[locate[i][j]]++;
		}
	}

	// sort & print
	sort(loc_cnt + 1, loc_cnt + loc_num + 1);
	cout << loc_num << endl;
	for (int i = 1; i <= loc_num; i++)
		cout << loc_cnt[i] << ' ';
	cout << endl;
}
