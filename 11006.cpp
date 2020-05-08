#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int N, M; cin >> N >> M;

		int one_leg = M * 2 - N;
		cout << one_leg << ' ' << M - one_leg << endl;
	}
}
