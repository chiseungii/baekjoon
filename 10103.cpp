#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;

	int a = 100, b = 100;
	for (int i = 0; i < n; i++) {
		int n1, n2; cin >> n1 >> n2;

		if (n1 > n2) b -= n1;
		else if (n1 < n2) a -= n2;
	}

	cout << a << '\n' << b << '\n';
}
