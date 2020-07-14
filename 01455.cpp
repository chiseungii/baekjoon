#include <iostream>
using namespace std;

char coins[100][100];

int main() {
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> coins[i][j];

	int cnt = 0;
	for (int i = N - 1; i >= 0; i--) {
		for (int j = M - 1; j >= 0; j--) {
			if (coins[i][j] == '1') {
				cnt++;
				for (int a = 0; a <= i; a++)
					for (int b = 0; b <= j; b++) {
						if (coins[a][b] == '0') coins[a][b] = '1';
						else coins[a][b] = '0';
					}
			}
		}
	}

	cout << cnt << endl;
}
