#include <iostream>
using namespace std;

int main() {
	int N, M; cin >> N >> M;

	int max = 0;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		if (a > max) max = a;
	}
	int shield = max;

	max = 0;
	for (int i = 0; i < M; i++) {
		int a; cin >> a;
		if (a > max) max = a;
	}
	shield += max;

	cout << shield << endl;
}
