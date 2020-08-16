#include <iostream>
using namespace std;

int cake[1001];

int main() {
	int L, N; cin >> L >> N;

	int max_respect = -1, max_guest = -1;
	int max_real = -1, max_real_guest = -1;
	for (int i = 0; i < N; i++) {
		int P, K; cin >> P >> K;
		int cnt = K - P + 1;

		if (cnt > max_respect) {
			max_respect = cnt;
			max_guest = i + 1;
		}

		for (int j = P; j <= K; j++) {
			if (cake[j]) cnt--;
			else cake[j] = i + 1;
		}

		if (cnt > max_real) {
			max_real = cnt;
			max_real_guest = i + 1;
		}
	}

	cout << max_guest << endl;
	cout << max_real_guest << endl;
}
