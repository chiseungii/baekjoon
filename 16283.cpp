#include <iostream>
using namespace std;

int main() {
	int a, b, n, w; cin >> a >> b >> n >> w;

	int r1 = -1, r2 = -1, cnt = 0;
	for (int i = 1; i < n; i++) {
		if (i * a + (n - i) * b == w) {
			r1 = i; r2 = n - i;
			cnt++;
		}
	}

	if ((r1 == -1 && r2 == -1) || cnt != 1)
		cout << -1 << endl;
	else
		cout << r1 << ' ' << r2 << endl;
}
