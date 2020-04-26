#include <iostream>
#include <cmath>
using namespace std;

int main() {
	while (1) {
		double ta, tb; cin >> ta >> tb;
		if (ta == 0 && tb == 0) break;

		double v = sqrt(1 - (tb * tb) / (ta * ta));

		cout << fixed;
		cout.precision(3);
		cout << v << endl;
	}
}
