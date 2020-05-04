#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	int N, K;
	for (int i = 0; i < T; i++) {
		cin >> N >> K;

		int children = 0;
		for (int j = 0; j < N; j++) {
			int candy; cin >> candy;

			children += (candy / K);
		}

		cout << children << endl;
	}
}
