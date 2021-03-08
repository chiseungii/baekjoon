#include <iostream>
#include <queue>
using namespace std;

char picture[100][100];
char abnormal_picture[100][100];
char check[100][100];

int N;

int di[4] = { 1, 0, -1, 0 };
int dj[4] = { 0, 1, 0, -1 };

int normal_BFS(int i, int j) {
	char color = picture[i][j];

	queue<pair<int, int>> q;
	q.push(make_pair(i, j));
	check[i][j] = 1;

	while (q.size()) {
		pair<int, int> tmp = q.front();
		q.pop();

		for (int k = 0; k < 4; k++) {
			int move_i = tmp.first + di[k];
			int move_j = tmp.second + dj[k];

			if (move_i < 0 || move_i >= N) continue;
			else if (move_j < 0 || move_j >= N) continue;
			else if (!check[move_i][move_j] && picture[move_i][move_j] == color) {
				check[move_i][move_j] = 1;
				q.push(make_pair(move_i, move_j));
			}
		}
	}

	return 1;
}

int abnormal_BFS(int i, int j) {
	char color = abnormal_picture[i][j];

	queue<pair<int, int>> q;
	q.push(make_pair(i, j));
	check[i][j] = 1;

	while (q.size()) {
		pair<int, int> tmp = q.front();
		q.pop();

		for (int k = 0; k < 4; k++) {
			int move_i = tmp.first + di[k];
			int move_j = tmp.second + dj[k];

			if (move_i < 0 || move_i >= N) continue;
			else if (move_j < 0 || move_j >= N) continue;
			else if (!check[move_i][move_j] && abnormal_picture[move_i][move_j] == color) {
				check[move_i][move_j] = 1;
				q.push(make_pair(move_i, move_j));
			}
		}
	}

	return 1;
}

int main() {
	cin >> N;	// N x N

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> picture[i][j];

	// 정상인 BFS
	// init
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			check[i][j] = 0;

	int normal_cnt = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (!check[i][j])
				normal_cnt += normal_BFS(i, j);

	// 적록색약 BFS
	// init
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			check[i][j] = 0;

			if (picture[i][j] == 'G')
				abnormal_picture[i][j] = 'R';
			else abnormal_picture[i][j] = picture[i][j];
		}
	}

	int abnormal_cnt = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (!check[i][j])
				abnormal_cnt += abnormal_BFS(i, j);

	cout << normal_cnt << ' ' << abnormal_cnt << endl;
}
