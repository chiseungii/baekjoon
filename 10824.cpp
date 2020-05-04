#include <iostream>
using namespace std;

int len_int(long long n) {
	int size = 0;
	for (; n > 0; n /= 10) size++;

	return size;
}

int main() {
	long long A, B, C, D; cin >> A >> B >> C >> D;

	int size_B = len_int(B);
	int size_D = len_int(D);
	for (int i = 0; i < size_B; i++) A *= 10;
	for (int i = 0; i < size_D; i++) C *= 10;

	cout << A + B + C + D << endl;
}
