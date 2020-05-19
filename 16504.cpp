#include <iostream>
using namespace std;

int main() {
	long long N; cin >> N;

	long long sum = 0;
	for (int i = 0; i < N * N; i++) {
		int a; cin >> a;
		sum += a;
	}

	cout << sum << endl;
}
