#include <iostream>
using namespace std;

int main() {
	string s; cin >> s;

	int height = 10;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1])
			height += 5;
		else
			height += 10;
	}

	cout << height << endl;
}
