#include <iostream>
using namespace std;

int* baskets;

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int N, M; cin >> N >> M;
	baskets = new int[N + 1];
	for (int i = 1; i <= N; i++)
		baskets[i] = i;

	for (int i = 0; i < M; i++) {
		int I, J; cin >> I >> J;

		for (int j = 0; j <= (J - I) / 2; j++)
			swap(baskets[j + I], baskets[J - j]);
	}

	for (int i = 1; i <= N; i++)
		cout << baskets[i] << ' ';
	cout << endl;

	delete[] baskets;
}
