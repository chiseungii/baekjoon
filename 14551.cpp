#include <iostream>
using namespace std;

int main() {
	int N, M; cin >> N >> M;

	int result = 1;
	for (int i = 0; i < N; i++) {
		int A; cin >> A;

		if (A)
			result = result * A % M;
	}

	cout << result % M << endl;
}
