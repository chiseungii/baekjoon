#include <iostream>
using namespace std;

int n;
bool doors[101][101];

void DP() {
	for (int i = 1; i <= n; i++)
		doors[1][i] = true;

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++)
			doors[i][j] = doors[i - 1][j];
		for (int j = i; j <= n; j++) {
			if (j % i == 0)
				doors[i][j] = !doors[i - 1][j];
			else doors[i][j] = doors[i - 1][j];
		}
	}
}

int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;

		DP();
		int cnt = 0;
		for (int j = 1; j <= n; j++)
			if (doors[n][j]) cnt++;
		cout << cnt << endl;
	}
}
