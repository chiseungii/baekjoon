#include <iostream>
#include <queue>
using namespace std;

char field[250][250];	// input
char check[250][250];	// 방문 체크

int di[4] = { 1, 0, -1, 0 };
int dj[4] = { 0, 1, 0, -1 };

int R, C;

pair<int,int> BFS(int a, int b) {
	queue<pair<int, int>> B;
	B.push(make_pair(a, b));
	check[a][b] = 1;

	pair<int, int> animals;	// 양, 늑대
	animals.first = animals.second = 0;
	if (field[a][b] == 'o') animals.first++;
	else if (field[a][b] == 'v') animals.second++;
	// bool go_away = false;
	while (!B.empty()) {
		int tmp_i = B.front().first;
		int tmp_j = B.front().second;
		B.pop();

		for (int i = 0; i < 4; i++) {
			int move_i = tmp_i + di[i];
			int move_j = tmp_j + dj[i];

			if (move_i < 0 || move_i >= R) {
				// go_away = true;
				continue;
			}
			else if (move_j < 0 || move_j >= C) {
				// go_away = true;
				continue;
			}
			else if (field[move_i][move_j] != '#' && !check[move_i][move_j]) {
				if (field[move_i][move_j] == 'v') animals.second++;
				else if (field[move_i][move_j] == 'o') animals.first++;

				B.push(make_pair(move_i, move_j));
				check[move_i][move_j] = 1;
			}
		}
	}

	// if (go_away) return make_pair(0, 0);
	if (animals.first > animals.second)
		animals.second = 0;
	else animals.first = 0;

	return animals;
}

int main() {
	// input
	cin >> R >> C;

	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			cin >> field[i][j];

	// BFS
	pair<int, int> animals;
	animals.first = animals.second = 0;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (field[i][j] != '#' && !check[i][j]) {
				pair<int, int> tmp = BFS(i, j);
				animals.first += tmp.first;
				animals.second += tmp.second;
			}
		}
	}

	cout << animals.first << ' ' << animals.second << endl;
}
