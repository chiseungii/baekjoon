#include <iostream>
using namespace std;

int googleToInt(string s) {
	int result = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'O')
			result *= 10;
		else
			result = result * 10 + 1;
	}

	return result;
}

char twoToTen(int n) {
	int base = 1;
	int result = 0;
	while (n > 0) {
		result += n % 10 * base;
		n /= 10;
		base *= 2;
	}

	return result;
}

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int B; cin >> B;
		string s; cin >> s;

		printf("Case #%d: ", i + 1);
		for (int j = 0; j < B; j++) {
			int tmp = googleToInt(s.substr(j * 8, 8));
			cout << twoToTen(tmp);
		}

		cout << endl;
	}
}
