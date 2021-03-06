#include <iostream>
using namespace std;

bool line[10001] = { false, };

void draw(int x, int y) {
	for (int i = x; i < y; i++)
		line[i] = true;
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;

		if (x < y)
			draw(x, y);
		else
			draw(y, x);
	}

		int cnt = 0;
		for (int i = 1; i < 10001; i++)
			if (line[i])
				cnt++;
		cout << cnt << '\n';
}
