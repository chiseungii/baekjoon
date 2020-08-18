#include <iostream>
using namespace std;

char slot[10000];

int main() {
	int N, Q; cin >> N >> Q;
	for (int i = 0; i < N; i++)
		slot[i] = 0;

	for (int i = 0; i < Q; i++) {
		int L, I; cin >> L >> I;

		for (int j = L - 1; j < N; j += I)
			slot[j] = 1;
	}

	int cnt = 0;
	for (int i = 0; i < N; i++)
		if (!slot[i]) cnt++;

	cout << cnt << endl;
}
