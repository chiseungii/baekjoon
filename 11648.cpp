#include <iostream>
using namespace std;

string itos(int n) {
	string result = "";
	while (n > 0) {
		result = (char)(n % 10 + '0') + result;
		n /= 10;
	}

	return result;
}

int main() {
	string s; cin >> s;

	int cnt = 0;
	while (s.length() > 1) {
		cnt++;
		int mul = 1;
		for (int i = 0; i < s.length(); i++)
			mul *= s[i] - '0';

		s = itos(mul);
	}

	cout << cnt << endl;
}
