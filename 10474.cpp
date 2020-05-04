#include <iostream>
using namespace std;

int main() {
	while (1) {
		int a, b; cin >> a >> b;
		if (!a && !b) break;

		int r1 = a / b;
		int r2 = a % b;
		cout << r1 << ' ' << r2 << " / " << b << endl;
	}
}
