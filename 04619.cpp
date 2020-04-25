#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int B, N;
	while (1) {
		cin >> B >> N;
		if (!B && !N) break;

		int A = 1;
		while (pow(A, N) < B) A++;

		if (pow(A, N) == B) cout << A << endl;
		else {
			int small = abs(pow(A - 1, N) - B);
			int big = abs(pow(A, N) - B);

			if (small < big) cout << A - 1 << endl;
			else cout << A << endl;
		}
	}
}
