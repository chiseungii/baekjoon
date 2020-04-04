#include <iostream>
using namespace std;

int main() {
	int snail[101][101] = { 0, };
	int M, N; cin >> M >> N;

	for (int i = 1; i <= M; i++)
		for (int j = 1; j <= N; j++)
			snail[i][j] = 1;

	int x = 1, y = 1, cnt = 0;
	while (1) {
		// 오른쪽으로 이동
		while (snail[y][x]) {
			snail[y][x] = 0;
			x++;
		}
		x--;
		if (!snail[y + 1][x]) break;
		else {
			cnt++;
			y++;
		}

		// 밑으로 이동
		while (snail[y][x]) {
			snail[y][x] = 0;
			y++;
		}
		y--;
		if (!snail[y][x - 1]) break;
		else {
			cnt++;
			x--;
		}

		// 왼쪽으로 이동
		while (snail[y][x]) {
			snail[y][x] = 0;
			x--;
		}
		x++;
		if (!snail[y - 1][x]) break;
		else {
			cnt++;
			y--;
		}

		// 위로 이동
		while (snail[y][x]) {
			snail[y][x] = 0;
			y--;
		}
		y++;
		if (!snail[y][x + 1]) break;
		else {
			cnt++;
			x++;
		}
	}

	cout << cnt << endl;
}
