#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		int k; cin >> k;

		int people = 0;
		for (int j = 0; j < k; j++)
			people = 2 * (0.5 + (double)people);

		cout << people << endl;
	}
}
