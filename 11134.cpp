#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int N, C; cin >> N >> C;

		if (N % C) cout << N / C + 1 << endl;
		else cout << N / C << endl;
	}
}
