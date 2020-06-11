#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int score[5];
		for (int j = 0; j < 5; j++)
			cin >> score[j];
		sort(score, score + 5);

		if (score[3] - score[1] >= 4)
			cout << "KIN\n";
		else
			cout << score[1] + score[2] + score[3] << endl;
	}
}
