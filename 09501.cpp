#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	int N; double D;
	for (int i = 0; i < T; i++) {
		cin >> N >> D;

		double v, f, c;
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			cin >> v >> f >> c;

			double time = D / v;
			double available_time = f / c;
			if (available_time >= time) cnt++;
		}

		cout << cnt << endl;
	}
}
