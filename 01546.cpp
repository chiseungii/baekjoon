#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N; cin >> N;

	vector<int> scores;
	int max_score = 0;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		scores.push_back(a);

		if (a > max_score) max_score = a;
	}

	double sum = 0;
	for (int i = 0; i < N; i++)
		sum += (double)scores[i] / (double)max_score * 100.;

	printf("%.2f\n", sum / (double)N);
}
