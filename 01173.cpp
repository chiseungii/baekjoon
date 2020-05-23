#include <iostream>
using namespace std;

int main() {
	int N, m, M, T, R; cin >> N >> m >> M >> T >> R;

	if (M - m < T) cout << -1 << endl;
	else {
		int min = 0, mac = m;
		while (1) {
			min++;
			if (mac + T <= M) {
				mac += T;
				N--;
			}
			else {
				mac -= R;
				if (mac < m) mac = m;
			}

			if (N == 0) break;
		}

		cout << min << endl;
	}
}
