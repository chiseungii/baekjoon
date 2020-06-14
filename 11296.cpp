#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		double cost;
		char dots, coupon, credit;
		cin >> cost >> dots >> coupon >> credit;

		switch (dots) {
		case 'R':
			cost -= cost * 0.45;
			break;
		case 'G':
			cost -= cost * 0.3;
			break;
		case 'B':
			cost -= cost * 0.2;
			break;
		case 'Y':
			cost -= cost * 0.15;
			break;
		case 'O':
			cost -= cost * 0.1;
			break;
		case 'W':
			cost -= cost * 0.05;
			break;
		}

		if (coupon == 'C') cost -= cost * 0.05;

		if (credit == 'C')
			cost = round(cost * 10) / 10;
		else
			cost = round(cost * 100) / 100;

		cout << fixed;
		cout.precision(2);
		cout << '$' << cost << endl;
	}
}
