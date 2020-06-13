#include <iostream>
using namespace std;

int friends[1001];

int main() {
	int N, M; cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int A, B; cin >> A >> B;

		friends[A]++;
		friends[B]++;
	}

	for (int i = 1; i <= N; i++)
		cout << friends[i] << endl;
}
