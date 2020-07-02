#include <iostream>
using namespace std;

string swiftBase(int n, int base) {
	int a = 1, cnt = 1;
	while (a <= n) {
		a *= base; cnt++;
	}
	a /= base; cnt--;

	string result = "";
	for (int i = 0; i < cnt; i++) {
		int tmp = n / a;
		char c;
		switch (tmp) {
		case 10:
			c = 'A';
			break;
		case 11:
			c = 'B';
			break;
		case 12:
			c = 'C';
			break;
		case 13:
			c = 'D';
			break;
		case 14:
			c = 'E';
			break;
		case 15:
			c = 'F';
			break;
		default:
			c = tmp + '0';
			break;
		}
		result += c;

		n %= a;
		a /= base;
	}

	return result;
}

int main() {
	int m, n; cin >> m >> n;

	if (n == 10 || m == 0)
		cout << m << endl;
	else
		cout << swiftBase(m, n) << endl;
}
