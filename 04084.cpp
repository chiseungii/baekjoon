#include <iostream>
#include <cmath>
using namespace std;

int main() {
	while (1) {
		int a, b, c, d; cin >> a >> b >> c >> d;
		if (!a && !b && !c && !d) break;

		int cnt = 0;
		while (a != b || a != c || a != d) {
			int tmp = a;
			a = abs(a - b);
			b = abs(b - c);
			c = abs(c - d);
			d = abs(d - tmp);
			cnt++;
		}

		cout << cnt << endl;
	}
}
