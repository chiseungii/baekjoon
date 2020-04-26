#include <iostream>
using namespace std;

int main() {
	double t1; cin >> t1;
	while (1) {
		double t2; cin >> t2;
		if (t2 == 999) break;

		cout << fixed;
		cout.precision(2);
		cout << t2 - t1 << endl;

		t1 = t2;
	}
}
