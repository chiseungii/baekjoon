#include <iostream>
using namespace std;

int students[1001][6];
bool friends[1001][1001];

int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j < 6; j++)
			cin >> students[i][j];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			friends[i][j] = false;

	for (int i = 1; i <= n; i++) {
		// i: 학생 수
		for (int j = 1; j < 6; j++) {
			// j: 학년
			for (int k = i + 1; k <= n; k++) {
				// k: i번째 학생 제외한 다른 친구들
				if (students[i][j] == students[k][j]) {
					friends[i][k] = friends[k][i] = true;
				}
			}
		}
	}

	int max_cnt = -1, master = 0;
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++)
			if (friends[i][j]) cnt++;

		if (cnt > max_cnt) {
			max_cnt = cnt;
			master = i;
		}
	}

	cout << master << endl;
}
