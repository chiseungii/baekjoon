#include <iostream>
using namespace std;

int main() {
	int scenario = 1;
	while (1) {
		int o, w; cin >> o >> w;
		if (!o && !w) break;

		bool dead = false;
		while (1) {
			char c; int n;
			cin >> c >> n;
			if (c == '#' && !n) break;

			if (c == 'E') w -= n;
			else w += n;

			if (w <= 0) dead = true;
		}

		cout << scenario++ << ' ';
		if (dead) cout << "RIP\n";
		else if (w > o / 2 && w < o * 2) cout << ":-)\n";
		else cout << ":-(\n";
	}
}
