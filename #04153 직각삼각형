#include <iostream>
using namespace std;

int main() {
	int n1, n2, n3;

	while (1) {
		cin >> n1 >> n2 >> n3;

		if (n1 == 0 && n2 == 0 && n3 == 0)
			break;

		int max = n1;
		if (n2 > max) max = n2;
		if (n3 > max) max = n3;

		int sum = n1 * n1 + n2 * n2 + n3 * n3 - max * max;
		max *= max;

		if (sum == max) cout << "right\n";
		else cout << "wrong\n";
	}
}
