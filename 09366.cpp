#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t; cin >> t;

	int angle[3];
	for (int i = 0; i < t; i++) {
		cin >> angle[0] >> angle[1] >> angle[2];
		sort(angle, angle + 3);

		cout << "Case #" << i + 1 << ": ";
		if (angle[2] >= angle[0] + angle[1])
			cout << "invalid!\n";
		else if (angle[0] == angle[1] && angle[0] == angle[2])
			cout << "equilateral\n";
		else if (angle[0] == angle[1] || angle[1] == angle[2])
			cout << "isosceles\n";
		else
			cout << "scalene\n";
	}
}
