#include <iostream>
using namespace std;

int trues[100001];

int main() {
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		trues[a]++;
	}

	int cnt = 0;
	for (int i = 100000; i >= 0; i--) {
		if (trues[i] == i) {
			cout << i << endl;
			return 0;
		}
	}

	cout << -1 << endl;
}
