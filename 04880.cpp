#include <iostream>
using namespace std;

int main() {
	while (1) {
		int a1, a2, a3; cin >> a1 >> a2 >> a3;
		if (!a1 && !a2 && !a3) break;

		int b1 = a2 - a1;
		int b2 = a3 - a2;
		if (b1 == b2) {
			cout << "AP " << a3 + b1 << endl;
			continue;
		}

		int d1 = a2 / a1;
		int d2 = a3 / a2;
		if (d1 == d2)
			cout << "GP " << a3 * d1 << endl;
	}
}
