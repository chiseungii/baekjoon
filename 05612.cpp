#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int m; cin >> m;

	int max = m; bool zero = false;
	for (int i = 0; i < n; i++) {
		int in, out; cin >> in >> out;
		
		m += in; m -= out;
		if (m < 0) zero = true;
		if (m > max) max = m;
	}

	if (zero) cout << 0 << endl;
	else cout << max << endl;
}
