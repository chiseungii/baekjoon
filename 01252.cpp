#include <iostream>
using namespace std;

int main() {
	string a, b; cin >> a >> b;

	int index = 0;
	while (a[index++] == '0');
	a = a.substr(--index);
	if (a == "") a = "0";
	
	index = 0;
	while (b[index++] == '0');
	b = b.substr(--index);
	if (b == "") b = "0";

	string up, down;
	if (a.length() >= b.length()) {
		up = a; down = b;
	}
	else {
		up = b; down = a;
	}

	int len = down.length();
	int up_index = up.length() - 1;
	int down_index = down.length() - 1;

	int carry = 0; string result = "";
	for (int i = 0; i < len; i++) {
		int tmp = (up[up_index] - '0') + (down[down_index] - '0') + carry;

		carry = tmp / 2;
		result = (char)(tmp % 2 + '0') + result;

		up_index--; down_index--;
	}

	for (; up_index >= 0; up_index--) {
		int tmp = (up[up_index] - '0') + carry;

		carry = tmp / 2;
		result = (char)(tmp % 2 + '0') + result;
	}

	if (carry) result = (char)(carry + '0') + result;
	// if (result[0] == '0') result = "0";

	cout << result << endl;
}
