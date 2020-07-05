#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;

	int pow = (n + 1) / 2;
	int result = 1;
	for (int i = 0; i < pow; i++) {
		result *= 2;
		result %= 16769023;
	}

	cout << result << endl;
}
