#include <iostream>
using namespace std;

int multiple[1000];

int reverse_num(int n) {
	int result = 0;
	while (n > 0) {
		result = result * 10 + n % 10;
		n /= 10;
	}

	return result;
}

int main() {
	int N, K; cin >> N >> K;

	for (int i = 0; i < K; i++) {
		int tmp = (i + 1) * N;
		multiple[i] = reverse_num(tmp);
	}

	int max_mul = multiple[0];
	for (int i = 1; i < K; i++)
		if (multiple[i] > max_mul)
			max_mul = multiple[i];

	cout << max_mul << endl;
}
