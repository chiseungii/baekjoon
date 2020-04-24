#include <iostream>
using namespace std;

int main() {
	int x1, x2, y1, y2;
	int a, b;
	x1 = x2 = y1 = y2 = 0;

	cin >> x1 >> y1;
	for (int i = 0; i < 2; i++) {
		cin >> a >> b;

		if (a == x1) x1 = 0;
		else {
			if (a == x2) x2 = 0;
			else x2 = a;
		}

		if (b == y1) y1 = 0;
		else {
			if (b == y2) y2 = 0;
			else y2 = b;
		}
	}

	if (x1 == 0) a = x2;
	else a = x1;

	if (y1 == 0) b = y2;
	else b = y1;
	cout << a << ' ' << b << '\n';
}
