#include <iostream>
using namespace std;

int main() {
	long long N; cin >> N;

	long long sum = 0;
	for (long long i = 1; i < N; i++) {
		long long b = N * i + i;
		sum += b;
	}

	cout << sum << endl;
}
