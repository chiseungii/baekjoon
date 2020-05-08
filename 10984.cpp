#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int N; cin >> N;

		int grade = 0; double score = 0;
		for (int j = 0; j < N; j++) {
			int C; double G;
			cin >> C >> G;

			grade += C;
			score += (C * G);
		}

		cout << grade << ' ';
		cout << fixed;
		cout.precision(1);
		cout << score / grade << endl;
	}
}
