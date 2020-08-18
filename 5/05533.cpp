#include <iostream>
using namespace std;

int nums[200][3];
int sums[200];

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++)
			cin >> nums[i][j];
		sums[i] = 0;
	}

	for (int i = 0; i < 3; i++) {
		// i: 게임 라운드 수
		for (int j = 0; j < N; j++) {
			// j: 플레이어 수
			int cnt = 0;
			for (int k = 0; k < N; k++)
				if (nums[k][i] == nums[j][i]) cnt++;

			if (cnt == 1) sums[j] += nums[j][i];
		}
	}

	for (int i = 0; i < N; i++)
		cout << sums[i] << endl;
}
