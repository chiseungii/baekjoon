#include <iostream>
using namespace std;

int friends[100001];

int main() {
	int N, M; cin >> N >> M;

	int A, B;
	for (int i = 0; i < M; i++) {
		cin >> A >> B;

		friends[A]++;
		friends[B]++;
	}

	for (int i = 1; i <= N; i++)
		cout << friends[i] << '\n';
}
