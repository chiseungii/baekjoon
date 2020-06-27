#include <iostream>
using namespace std;

int peaks[30000];

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> peaks[i];

	int max_cnt = 0;
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = i + 1; j < N; j++) {
			if (peaks[j] > peaks[i]) break;
			else if (peaks[j] < peaks[i]) cnt++;
		}

		if (cnt > max_cnt) max_cnt = cnt;
	}

	cout << max_cnt << endl;
}
