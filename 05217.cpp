#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;

		cout << "Pairs for " << n << ": ";
		if (n % 2) {
			if (n == 1) cout << endl;
			else {
				cout << 1 << ' ' << n - 1;
				for (int i = 2; i <= n / 2; i++)
					cout << ", " << i << ' ' << n - i;
				cout << endl;
			}
		}
		else {
			if (n == 2) cout << endl;
			else {
				cout << 1 << ' ' << n - 1;
				for (int i = 2; i <= n / 2 - 1; i++)
					cout << ", " << i << ' ' << n - i;
				cout << endl;
			}
		}
	}
}
