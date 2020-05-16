#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int L, R, A; cin >> L >> R >> A;

	int num;
	if (L > R) {
		int dis = L - R;
		if (dis < A) {
			R += dis;
			A -= dis;

			if (A % 2) A--;
			num = R * 2 + A;
		}
		else {
			R += A;
			A = 0;

			num = R * 2;
		}
	}
	else if (L < R) {
		int dis = R - L;
		if (dis < A) {
			L += dis;
			A -= dis;

			if (A % 2) A--;
			num = L * 2 + A;
		}
		else {
			L += A;
			A = 0;

			num = L * 2;
		}
	}
	else {
		if (A % 2) A--;
		num = R * 2 + A;
	}

	cout << num << endl;
}
