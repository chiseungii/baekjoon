#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		string s; cin >> s;
		if (s == "#") break;

		int res = 0, pow = 1;
		for (int i = s.length() - 1; i >= 0; i--) {
			int a;
			switch (s[i]) {
			case '/':
				a = -1;
				break;
			case '-':
				a = 0;
				break;
			case '\\':
				a = 1;
				break;
			case '(':
				a = 2;
				break;
			case '@':
				a = 3;
				break;
			case '?':
				a = 4;
				break;
			case '>':
				a = 5;
				break;
			case '&':
				a = 6;
				break;
			case '%':
				a = 7;
				break;
			}
			res += (a * pow);
			pow *= 8;
		}

		cout << res << endl;
	}
}
