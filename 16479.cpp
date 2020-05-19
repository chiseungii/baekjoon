#include <iostream>
using namespace std;

int main() {
	double K, D1, D2; cin >> K >> D1 >> D2;

	double a = (D1 - D2) / 2;
	double h2 = K * K - a * a;

	cout << fixed;
	cout.precision(6);
	cout << h2 << endl;
}
