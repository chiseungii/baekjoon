#include <iostream>
using namespace std;

int main() {
	int card[2];
	int N, M; cin >> N >> M;
	cin >> card[0] >> card[1];

	bool turn = 0;
	for (int i = 0; i < M; i++) {
		int K; cin >> K;

		if (K >= card[turn])
			turn = !turn;
	}

	cout << card[turn] << endl;
}
