#include <iostream>
using namespace std;

int C;

long long _pow(long long n, int a) {
	if (a == 0) return 1;
	else if (a == 1) return n;

	if (a % 2) {
		long long tmp = _pow(n, a - 1);
		tmp %= C;
		return tmp * n;
	}
	else {
		long long tmp = _pow(n, a / 2);
		tmp %= C;
		return tmp * tmp;
	}
}

int main() {
	long long A, B;
	cin >> A >> B >> C;

	cout << _pow(A, B) % C << endl;
}
