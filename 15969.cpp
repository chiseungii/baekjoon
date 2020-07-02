#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int min = 1001, max = -1;
	for (int i = 0; i < N; i++) {
		int score; cin >> score;

		if (score < min) min = score;
		if (score > max) max = score;
	}

	cout << max - min << endl;
}
