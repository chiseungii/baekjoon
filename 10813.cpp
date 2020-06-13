#include <iostream>
using namespace std;

int baskets[101];

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int N, M; cin >> N >> M;
	for (int i = 1; i <= N; i++)
		baskets[i] = i;

	for (int i = 0; i < M; i++) {
		int I, J; cin >> I >> J;
		swap(baskets[I], baskets[J]);
	}

	for (int i = 1; i <= N; i++)
		cout << baskets[i] << ' ';
	cout << endl;
}
