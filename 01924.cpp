#include <iostream>
using namespace std;

int main() {
	int days[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
	int x, y; cin >> x >> y;

	int day = 0;
	for (int i = 1; i < x; i++)
		day += days[i - 1];
	day += y - 1;

	switch (day % 7) {
	case 0:
		cout << "MON\n";
		break;

	case 1:
		cout << "TUE\n";
		break;

	case 2:
		cout << "WED\n";
		break;

	case 3:
		cout << "THU\n";
		break;
		
	case 4:
		cout << "FRI\n";
		break;

	case 5:
		cout << "SAT\n";
		break;

	case 6:
		cout << "SUN\n";
		break;
	}
}
