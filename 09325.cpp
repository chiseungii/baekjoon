#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		int s, n; cin >> s >> n;

		for (int j = 0; j < n; j++) {
			int q, p; cin >> q >> p;

			s += (p * q);
		}

		cout << s << endl;
	}
}
