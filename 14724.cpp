#include <iostream>
using namespace std;

string circles[9] = { "PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY" };
int candidates[9];

int main() {
	int N; cin >> N;

	for (int i = 0; i < 9; i++) {
		int max = 0;
		for (int j = 0; j < N; j++) {
			int a; cin >> a;
			if (a > max) max = a;
		}

		candidates[i] = max;
	}

	int max_index = 0, max = candidates[0];
	for (int i = 1; i < 9; i++) {
		if (candidates[i] > max) {
			max_index = i;
			max = candidates[i];
		}
	}

	cout << circles[max_index] << endl;
}
