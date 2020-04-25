#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		int play1 = 0, play2 = 0;
		for (int j = 0; j < n; j++) {
			char p1, p2; cin >> p1 >> p2;

			if (p1 == 'R') {
				if (p2 == 'S')
					play1++;
				else if (p2 == 'P')
					play2++;
			}
			else if (p1 == 'S') {
				if (p2 == 'R')
					play2++;
				else if (p2 == 'P')
					play1++;
			}
			else {
				if (p2 == 'S')
					play2++;
				else if (p2 == 'R')
					play1++;
			}
		}

		if (play1 == play2) cout << "TIE\n";
		else if (play1 > play2) cout << "Player 1\n";
		else cout << "Player 2\n";
	}
}
