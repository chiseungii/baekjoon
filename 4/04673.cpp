#include <iostream>
using namespace std;

bool nums[10001];

int d(int n) {
	int sum = n;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}

	return sum;
}

int main() {
	for (int i = 1; i <= 10000; i++)
		nums[i] = true;

	for (int i = 1; i <= 10000; i++) {
		if (nums[i]) {
			int a = i;
			while (1) {
				a = d(a);

				if (a > 10000) break;
				else nums[a] = false;
			}
		}
	}

	for (int i = 1; i <= 10000; i++)
		if (nums[i]) cout << i << endl;
}
