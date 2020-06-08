#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		int n; cin >> n;

		long long a = 1;
		for (int j = 1; j <= n; j++) {
			a *= j;
			while (a % 10 == 0) a /= 10;
			a %= 1000000000;
		}

		cout << a % 10 << endl;
	}
}
