#include <iostream>
using namespace std;

int main() {
	while (1) {
		int a, b, c, d; cin >> a >> b >> c >> d;
		if (!a && !b && !c && !d) break;

		cout << c - b << ' ' << d - a << endl;
	}
}
