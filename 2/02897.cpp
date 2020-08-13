#include <iostream>
using namespace std;

int cars(char a, char b, char c, char d) {
	// a b
	// c d

	if (a == '#' || b == '#' || c == '#' || d == '#')
		return -1;
	else {
		int cnt = 0;
		if (a == 'X') cnt++;
		if (b == 'X') cnt++;
		if (c == 'X') cnt++;
		if (d == 'X') cnt++;

		return cnt;
	}
}

char parking[50][50];

int main() {
	int R, C; cin >> R >> C;
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			cin >> parking[i][j];

	int cnt[5] = { 0, 0, 0, 0, 0 };
	for (int i = 0; i < R - 1; i++) {
		for (int j = 0; j < C - 1; j++) {
			int a = cars(parking[i][j], parking[i][j + 1], parking[i + 1][j], parking[i + 1][j + 1]);
			if (a != -1) cnt[a]++;
		}
	}

	for (int i = 0; i < 5; i++)
		cout << cnt[i] << endl;
}
