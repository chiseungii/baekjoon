#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int N, M; cin >> N >> M;
		for (int i = 0; i < M; i++) { int a; cin >> a >> a; }
		cout << N - 1 << endl;
	}
}
