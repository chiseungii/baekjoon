#include <iostream>
using namespace std;

int main() {
	while (1) {
		int S; cin >> S;
		if (!S) break;

		while (1) {
			cout << S << ' ';
			if (S < 10) break;

			int mul = 1;
			while (S > 0) {
				mul *= S % 10;
				S /= 10;
			}

			S = mul;
		}

		cout << endl;
	}
}
