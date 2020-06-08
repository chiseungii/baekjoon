#include <iostream>
using namespace std;

int sum_num(int n, int base) {
	int sum = 0;
	while (n) {
		sum += n % base;
		n /= base;
	}

	return sum;
}

int main() {
	cout << 2992 << endl;
	for (int i = 2993; i <= 9999; i++) {
		int ten = sum_num(i, 10);
		int twelve = sum_num(i, 12);
		int sixteen = sum_num(i, 16);

		if (ten == twelve && ten == sixteen)
			cout << i << endl;
	}
}
