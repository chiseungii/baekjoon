#include <iostream>
using namespace std;

int main() {
	int min_n = 100, sum = 0;
	for (int i = 0; i < 7; i++) {
		int a; cin >> a;

		if (a % 2) {
			sum += a;
			if (a < min_n)
				min_n = a;
		}
	}

	if (sum == 0)
		cout << -1 << endl;
	else {
		cout << sum << endl;
		cout << min_n << endl;
	}
}
