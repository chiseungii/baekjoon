#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	int i = 0;
	while (++i) {
		double a, b, c; cin >> a >> b >> c;
		if (!a && !b && !c) break;

		printf("Triangle #%d\n", i);
		if (c == -1) {
			c = sqrt(a * a + b * b);
			printf("c = %.3f\n", c);
		}
		else {
			if (a == -1) {
				a = c * c - b * b;
				if (a <= 0) cout << "Impossible.\n";
				else printf("a = %.3f\n", sqrt(a));
			}
			else {
				b = c * c - a * a;
				if (b <= 0) cout << "Impossible.\n";
				else printf("b = %.3f\n", sqrt(b));
			}
		}

		cout << '\n';
	}
}
