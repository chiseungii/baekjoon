#include <iostream>
using namespace std;

int main() {
	int N, M; cin >> N >> M;

	long long sum = 0;
	for (int i = 0; i < N; i++) {
		int A; cin >> A;
		sum += A;
	}
	for (int i = 0; i < M; i++) {
		int B; cin >> B;
		sum += B;
	}

	cout << sum << endl;
}
