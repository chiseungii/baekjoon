#include <iostream>
using namespace std;

int main() {
	int X; cin >> X;

	int n = 1;
	while ((n * n + n) / 2 < X) n++;

	int an = (n * n + n) / 2;
	int dis = an - X;
	int up, down;
	if (n % 2) {
		up = 1 + dis;
		down = n - dis;
	}
	else {
		up = n - dis;
		down = 1 + dis;
	}

	cout << up << '/' << down << endl;
}
