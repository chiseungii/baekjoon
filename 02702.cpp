#include <iostream>
#include <algorithm>
using namespace std;

int lcd(int a, int b) {
	for (int i = max(a, b); i <= a * b; i++)
		if (i % a == 0 && i % b == 0) return i;
}

int gcd(int a, int b) {
	for (int i = min(a, b); i > 0; i--)
		if (a % i == 0 && b % i == 0) return i;
}

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int a, b; cin >> a >> b;
		cout << lcd(a, b) << ' ' << gcd(a, b) << endl;
	}
}
