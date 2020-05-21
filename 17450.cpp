#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	double Sp, Sw, Np, Nw, Up, Uw;
	cin >> Sp >> Sw >> Np >> Nw >> Up >> Uw;

	Sp *= 10; Np *= 10; Up *= 10;
	Sw *= 10; Nw *= 10; Uw *= 10;
	if (Sp >= 5000) Sp -= 500;
	if (Np >= 5000) Np -= 500;
	if (Up >= 5000) Up -= 500;

	pair<double, char> S = { Sw / Sp, 'S' };
	pair<double, char> N = { Nw / Np, 'N' };
	pair<double, char> U = { Uw / Up, 'U' };

	pair<double, char> result = max({ S, N, U });
	cout << result.second << endl;
}
