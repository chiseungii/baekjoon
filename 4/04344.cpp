#include <iostream>
#include <vector>
using namespace std;

int main() {
	int C; cin >> C;

	for (int i = 0; i < C; i++) {
		int N; cin >> N;

		vector<int> scores;
		int sum_score = 0;
		for (int j = 0; j < N; j++) {
			int a; cin >> a;

			scores.push_back(a);
			sum_score += a;
		}

		double avg_score = (double)sum_score / (double)N;
		int cnt = 0;
		for (int j = 0; j < N; j++)
			if (scores[j] > avg_score) cnt++;

		double good_stud = (double)cnt / (double)N;
		printf("%.3f", good_stud * 100);
		cout << '%' << endl;
	}
}
