#include <iostream>
using namespace std;

int* baskets;

int main() {
	int N, M; cin >> N >> M;
	baskets = new int[N + 1];
	for (int i = 1; i <= N; i++)
		baskets[i] = 0;

	for (int i = 0; i < M; i++) {
		int I, J, K; cin >> I >> J >> K;

		for (int j = I; j <= J; j++)
			baskets[j] = K;
	}

	for (int i = 1; i <= N; i++)
		cout << baskets[i] << ' ';
	cout << endl;
}
