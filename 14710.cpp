#include <iostream>
using namespace std;

int main() {
	int hour, min;
	cin >> hour >> min;

	double theta2 = (double)min / 12.;
	if (hour % 30 == theta2)
		cout << "O\n";
	else
		cout << "X\n";
}
