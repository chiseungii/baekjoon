#include <iostream>
using namespace std;

int digital_root(int n) {
	int result = 0;
	while (n) {
		result += (n % 10);
		n /= 10;
	}
	
	return result;
}

int main() {
	while (1) {
		string s; cin >> s;
		if (s == "0") break;

		int n = 0;
		for (int i = 0; i < s.length(); i++)
			n += (s[i] - '0');

		while (n / 10) n = digital_root(n);
		cout << n << endl;
	}
}
