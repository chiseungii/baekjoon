#include <iostream>
using namespace std;

int main() {
	int answer[10] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		bool reExam = true;
		for (int j = 0; j < 10; j++) {
			int a; cin >> a;

			if (answer[j] != a) reExam = false;
		}

		if (reExam) cout << i + 1 << endl;
	}
}
