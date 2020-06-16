#include <iostream>
using namespace std;

int students[2][6];

int main() {
	int N, K; cin >> N >> K;

	for (int i = 0; i < N; i++) {
		int S, Y; cin >> S >> Y;
		students[S][Y - 1]++;
	}

	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		if (students[0][i] % K)
			cnt += students[0][i] / K + 1;
		else if (students[0][i] != 0)
			cnt += students[0][i] / K;

		if (students[1][i] % K)
			cnt += students[1][i] / K + 1;
		else if (students[1][i] != 0)
			cnt += students[1][i] / K;
	}

	cout << cnt << endl;
}
