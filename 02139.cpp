#include <iostream>
using namespace std;

char yoon = 0;

char isYoon(int year) {
	if (year % 4 == 0 && year % 100) return 1;
	if (year % 400 == 0) return 1;

	return 0;
}

int main() {
	int days[12] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
	while (1) {
		int d, m, y; cin >> d >> m >> y;
		if (!d && !m && !y) break;

		yoon = isYoon(y);
		int day_sum = 0;
		for (int i = 1; i < m; i++) {
			if (i == 2) day_sum += days[i] + yoon;
			else day_sum += days[i];
		}
		day_sum += d;

		cout << day_sum << endl;
	}
}
