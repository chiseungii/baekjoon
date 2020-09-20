#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b) {
		int c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	int T; cin >> T;

	for (int tc = 0; tc < T; tc++) {
		int A, B; cin >> A >> B;
		cout << lcm(A, B) << endl;
	}
}
