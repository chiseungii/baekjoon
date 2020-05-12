#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int N; cin >> N;

		int cost = 0;
		for (int j = 0; j < N; j++) {
			int A, B, C; cin >> A >> B >> C;

			int max = A;
			if (B > max) max = B;
			if (C > max) max = C;

			if (max > 0) cost += max;
		}

		cout << cost << endl;
	}
}
