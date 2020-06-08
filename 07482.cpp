#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	
	for (int i = 0; i < n; i++) {
		double a; cin >> a;

		cout << fixed;
		cout.precision(10);
		cout << a / 6 << endl;
	}
}
