#include <iostream>
using namespace std;

int main() {
	double parts[5] = { 350.34,230.90,190.55,125.30,180.90 };
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		double sum = 0;
		for (int j = 0; j < 5; j++) {
			int a; cin >> a;
			sum += (parts[j] * a);
		}

		cout << fixed;
		cout.precision(2);
		cout << '$' << sum << endl;
	}
}
