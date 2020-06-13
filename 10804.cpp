#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int cards[21];
	for (int i = 1; i < 21; i++)
		cards[i] = i;

	for (int i = 0; i < 10; i++) {
		int a, b; cin >> a >> b;

		for (int j = 0; j <= (b - a) / 2; j++)
			swap(cards[a + j], cards[b - j]);
	}

	for (int i = 1; i < 21; i++)
		cout << cards[i] << ' ';
	cout << endl;
}
