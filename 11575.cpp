#include <iostream>
using namespace std;

char affineCipher(int a, int b, char c) {
	int X = c - 'A';
	int E = (a * X + b) % 26;

	return E + 'A';
}

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int a, b; cin >> a >> b;
		string s; cin >> s;

		for (int i = 0; i < s.length(); i++)
			cout << affineCipher(a, b, s[i]);
		cout << endl;
	}
}
