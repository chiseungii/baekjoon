#include <iostream>
using namespace std;

char card[100][100];

int main() {
	int R, C; cin >> R >> C;
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			cin >> card[i][j];

	// 가로 대칭
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			card[i][2 * C - 1 - j] = card[i][j];

	// 세로 대칭
	for (int i = 0; i < R; i++)
		for (int j = 0; j < 2 * C; j++)
			card[R * 2 - 1 - i][j] = card[i][j];

	int A, B; cin >> A >> B;
	if (card[A - 1][B - 1] == '#') card[A - 1][B - 1] = '.';
	else card[A - 1][B - 1] = '#';

	for (int i = 0; i < 2 * R; i++) {
		for (int j = 0; j < 2 * C; j++)
			cout << card[i][j];
		cout << endl;
	}
}
