#include <iostream>
using namespace std;

int main() {
	int N, P; cin >> N >> P;

	long long result = 1;
	for (int i = 2; i <= N; i++) {
		result *= i;
		result %= P;
	}

	cout << result << endl;
}
