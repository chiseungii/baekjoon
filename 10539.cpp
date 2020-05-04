#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	int* B = new int[N];
	for (int i = 0; i < N; i++)
		cin >> B[i];

	cout << B[0] << ' ';
	int sum = B[0];
	for (int i = 1; i < N; i++) {
		int tmp = B[i] * (i + 1) - sum;
		cout << tmp << ' ';
		sum += tmp;
	}
	cout << '\n';

	delete[] B;
}
