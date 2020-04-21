#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int correct = 0, score = 0;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;

		if (a) {
			correct++;
			score += correct;
		}
		else correct = 0;
	}

	cout << score << endl;
}
