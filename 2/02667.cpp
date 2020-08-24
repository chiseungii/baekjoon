#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

char map[25][25];		// input
int address[25][25];	// 번지 수
char check[25][25];		// 방문 체크
int address_cnt;		// 번지 수 체크
int house_cnt[625];		// 번지마다 집 개수

int di[4] = { 1, 0, -1, 0 };
int dj[4] = { 0, 1, 0, -1 };

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			char c; cin >> c;
			map[i][j] = c - '0';
		}
	}

	// init
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			address[i][j] = check[i][j] = 0;
	address_cnt = 0;

	// BFS
	queue<pair<int, int>> BFS;
	while (1) {
		// queue 비우기
		while (!BFS.empty()) BFS.pop();

		// 남은 집 체크
		bool finish = true;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j] && !check[i][j]) {
					finish = false;
					BFS.push(make_pair(i, j));
					check[i][j] = 1;
					break;
				}
			}
			if (!finish) break;
		}
		if (finish) break;

		// 번지 수 증가
		address_cnt++;
		// 첫 집 체크
		address[BFS.front().first][BFS.front().second] = address_cnt;

		// BFS 돌리기
		while (!BFS.empty()) {
			int tmp_i = BFS.front().first;
			int tmp_j = BFS.front().second;
			BFS.pop();

			for (int i = 0; i < 4; i++) {
				int move_i = tmp_i + di[i];
				int move_j = tmp_j + dj[i];
				// 범위 벗어나는지 확인
				if ((move_i < 0 || move_i >= N) || (move_j < 0 || move_j >= N))
					continue;

				if (map[move_i][move_j] && !check[move_i][move_j]) {
					BFS.push(make_pair(move_i, move_j));
					address[move_i][move_j] = address_cnt;
					check[move_i][move_j] = 1;
				}
			}
		}
	}

	// 각 번지마다 집 몇 채인지 카운팅
	for (int i = 1; i <= address_cnt; i++)
		house_cnt[i] = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (address[i][j]) {
				house_cnt[address[i][j]]++;
			}
		}
	}

	// 최종 출력
	cout << address_cnt << endl;
	sort(house_cnt + 1, house_cnt + 1 + address_cnt);
	for (int i = 1; i <= address_cnt; i++)
		cout << house_cnt[i] << endl;
}
