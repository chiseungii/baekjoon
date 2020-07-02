#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;

	int sum_score = 0;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;

		int score = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '0' || s[j] == '6' || s[j] == '9')
				score = score * 10 + 9;
			else
				score = score * 10 + (s[j] - '0');

		}

		if (score > 100) score = 100;
		sum_score += score;
	}

	double avg_score = (double)sum_score / (double)N;
	avg_score += 0.5;
	cout << (int)avg_score << endl;
}
