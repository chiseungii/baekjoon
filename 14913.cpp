#include <iostream>
using namespace std;

int main() {
	int a, d, k; cin >> a >> d >> k;

	if ((k - a) % d) cout << "X" << endl;
	else {
		int n = (k - a) / d + 1;
		
		if (n <= 0) cout << "X" << endl;
		else cout << n << endl;
	}
}
