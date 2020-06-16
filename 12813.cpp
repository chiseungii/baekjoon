#include <iostream>
using namespace std;

int main() {
	string A, B; cin >> A >> B;

	string r1, r2, r3, r4, r5;
	r1 = r2 = r3 = r4 = r5 = "";
	for (int i = 0; i < A.length(); i++) {
		int a = A[i] - '0';
		int b = B[i] - '0';

		if (a & b) r1 += '1';
		else r1 += '0';

		if (a | b) r2 += '1';
		else r2 += '0';

		if (a ^ b) r3 += '1';
		else r3 += '0';

		if (!a) r4 += '1';
		else r4 += '0';

		if (!b) r5 += '1';
		else r5 += '0';
	}

	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;
	cout << r4 << endl;
	cout << r5 << endl;
}
