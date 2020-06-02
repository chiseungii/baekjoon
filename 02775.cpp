#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int k, n; cin >> k >> n;

		int* room = new int[n + 1];
		for (int i = 0; i < n + 1; i++)
			room[i] = i;

		for (int i = 1; i <= k; i++)
			for (int j = 1; j <= n; j++)
				room[j] = room[j - 1] + room[j];

		cout << room[n] << endl;
		delete[] room;
	}
}
