#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;

	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;

		if (!x || !y) axis++;
		else if (x > 0 && y > 0) q1++;
		else if (x < 0 && y>0) q2++;
		else if (x < 0 && y < 0) q3++;
		else q4++;
	}

	cout << "Q1: " << q1 << endl;
	cout << "Q2: " << q2 << endl;
	cout << "Q3: " << q3 << endl;
	cout << "Q4: " << q4 << endl;
	cout << "AXIS: " << axis << endl;
}
