#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int sum = 0, min = 101;
		for (int j = 0; j < 7; j++) {
			int a; cin >> a;

			if (a % 2 == 0) {
				sum += a;
				if (a < min) min = a;
			}
		}

		cout << sum << ' ' << min << endl;
	}
}
