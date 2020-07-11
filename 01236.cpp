#include <iostream>
using namespace std;

char castle[50][50];

int main() {
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> castle[i][j];

	int cnt_N = 0;
	for (int i = 0; i < N; i++) {
		bool exist = false;
		for (int j = 0; j < M; j++) {
			if (castle[i][j] == 'X') {
				exist = true;
				break;
			}
		}

		if (!exist) cnt_N++;
	}

	int cnt_M = 0;
	for (int i = 0; i < M; i++) {
		bool exist = false;
		for (int j = 0; j < N; j++) {
			if (castle[j][i] == 'X') {
				exist = true;
				break;
			}
		}

		if (!exist) cnt_M++;
	}

	if (cnt_N >= cnt_M) cout << cnt_N << endl;
	else cout << cnt_M << endl;
}
