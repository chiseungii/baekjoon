#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int two, one, zero, eight, other;
	two = one = zero = eight = other = 0;
	while (N > 0) {
		int a = N % 10;

		if (a == 2) two++;
		else if (a == 1) one++;
		else if (a == 0) zero++;
		else if (a == 8) eight++;
		else other++;

		N /= 10;
	}

	if (other) cout << 0 << endl;
	else if (!two || !one || !zero || !eight) cout << 1 << endl;
	else if (two == one && two == zero && two == eight) cout << 8 << endl;
	else cout << 2 << endl;
}
