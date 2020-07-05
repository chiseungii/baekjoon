#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	string S; cin >> S;

	int bonus = 0, score = 0;
	for (int i = 0; i < S.length(); i++) {
		if (S[i] == 'O') {
			score += i + 1;
			score += bonus;
			bonus++;
		}
		else bonus = 0;
	}

	cout << score << endl;
}
