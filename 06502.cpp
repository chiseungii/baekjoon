#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n = 1;
	while (1) {
		int r; cin >> r;
		if (!r) break;
		int w, l; cin >> w >> l;

		cout << "Pizza " << n << ' ';
		double line = sqrt(pow((double)w, 2) + pow((double)l, 2));
		if (line <= r * 2)
			cout << "fits on the table.\n";
		else
			cout << "does not fit on the table.\n";

		n++;
	}
}
