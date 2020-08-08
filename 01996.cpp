#include <iostream>
using namespace std;

char map[1002][1002];
char result_map[1002][1002];

int main() {
	int N; cin >> N;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			cin >> map[i][j];

	int move_i[8] = { 0, -1, -1, -1, 0, 1, 1, 1 };
	int move_j[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (map[i][j] == '.') {
				int sum = 0;
				for (int k = 0; k < 8; k++) {
					int mi = move_i[k], mj = move_j[k];
					if (isdigit(map[i + mi][j + mj]))
						sum += map[i + mi][j + mj] - '0';
				}

				if (sum >= 10) result_map[i][j] = 'M';
				else result_map[i][j] = '0' + sum;
			}
			else result_map[i][j] = '*';
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			cout << result_map[i][j];
		cout << endl;
	}
}
