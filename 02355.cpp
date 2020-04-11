#include <iostream>
#include <cmath>
using namespace std;

void swap(long long& a, long long& b) {
	long long tmp = a;
	a = b;
	b = tmp;
}

int main() {
	long long A, B; cin >> A >> B;
	if (A > B) swap(A, B);

	long long start, end, res;
	if (A < 0 && B>00) {
		if (abs(A) == B) {
			cout << 0 << endl;
			return 0;
		}
		else if (abs(A) > B) {
			start = A;
			end = -B - 1;
		}
		else {
			start = abs(A) + 1;
			end = B;
		}

		res = (end - start + 1) * (start + end) / 2;
	}
	else
		res = (B - A + 1) * (A + B) / 2;

	cout << res << endl;
}
