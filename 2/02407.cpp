#include <iostream>
#include <string>
using namespace std;

#define MAX_INT 2147483647

string C[101][101];

string add(string a, string b) {
	// 빈 공간만큼 0으로 채움
	int len;
	if (a.length() >= b.length()) {
		len = a.length();
		while (b.length() != len) b = '0' + b;
	}
	else {
		len = b.length();
		while (a.length() != len) a = '0' + a;
	}

	// 끝자리부터 더해줌
	string c = "";
	int carry = 0;
	for (int i = len - 1; i >= 0; i--) {
		int tmp = (a[i] - '0') + (b[i] - '0') + carry;
		carry = tmp / 10;
		tmp %= 10;
		c = to_string(tmp) + c;
	}
	if (carry) c = to_string(carry) + c;

	return c;
}

int main() {
	int n, m; cin >> n >> m;

	C[1][0] = C[1][1] = "1";
	for (int i = 2; i <= n; i++) {
		C[i][0] = C[i][i] = "1";
		for (int j = 1; j < i; j++)
			C[i][j] = add(C[i - 1][j], C[i - 1][j - 1]);
	}

	cout << C[n][m] << endl;
}
