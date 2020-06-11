#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		string s; cin >> s;

		int score = 0, cnt = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') {
				cnt++;
				score += cnt;
			}
			else cnt = 0;
		}

		cout << score << endl;
	}
}
