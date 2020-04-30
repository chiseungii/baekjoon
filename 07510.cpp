#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		int angle[3];
		for (int j = 0; j < 3; j++)
			cin >> angle[j];
		sort(angle, angle + 3);

		cout << "Scenario #" << i << ":\n";
		if (angle[2] * angle[2] == angle[0] * angle[0] + angle[1] * angle[1])
			cout << "yes\n\n";
		else cout << "no\n\n";
	}
}
