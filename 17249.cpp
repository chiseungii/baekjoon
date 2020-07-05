#include <iostream>
using namespace std;

int main() {
	string s; cin >> s;

	bool change_dir = false;
	int left = 0, right = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') change_dir = true;

		if (s[i] == '@') {
			if (change_dir) right++;
			else left++;
		}
	}

	cout << left << ' ' << right << endl;
}
