#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double A, B; cin >> A >> B;

	double M = (B - A) / 400;
	double prob = 1 / (1 + pow(10, M));

	cout << fixed;
	cout.precision(4);
	cout << prob << endl;
}
