#include <iostream>
using namespace std;

int* funny;
int* vote;

int main() {
	int N, M; cin >> N >> M;

	funny = new int[N];
	vote = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> funny[i];
		vote[i] = 0;
	}

	for (int i = 0; i < M; i++) {
		int B; cin >> B;

		for (int j = 0; j < N; j++) {
			if (funny[j] <= B) {
				vote[j]++;
				break;
			}
		}
	}

	int max = vote[0], max_index = 1;
	for (int i = 1; i < N; i++) {
		if (vote[i] > max) {
			max = vote[i];
			max_index = i + 1;
		}
	}

	cout << max_index << endl;

	delete[] funny;
	delete[] vote;
}
