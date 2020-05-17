#include <iostream>
using namespace std;

int main() {
	int A, B; cin >> A >> B;

	cout << A / B << '.';
	int tmp = A % B;
	for (int i = 0; i < 1000; i++) {
		tmp *= 10;
		int a = tmp / B;
		int b = tmp % B;
		cout << a;

		if (b == 0) break;
		else tmp = b;
	}
	cout << '\n';
}
