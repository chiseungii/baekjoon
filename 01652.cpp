#include <iostream>
using namespace std;

char room[100][100];

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> room[i][j];
		}
	}

	// 가로 자리
	int garo = 0;
	for (int i = 0; i < N; i++) {
		// i: 행
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			if (room[i][j] == '.') cnt++;
			else {
				if (cnt >= 2) garo++;
				cnt = 0;
			}
		}

		if (cnt >= 2) garo++;
	}

	// 세로 자리
	int sero = 0;
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			if (room[j][i] == '.') cnt++;
			else {
				if (cnt >= 2) sero++;
				cnt = 0;
			}
		}

		if (cnt >= 2) sero++;
	}

	cout << garo << ' ' << sero << endl;
}
