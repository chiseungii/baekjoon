#include <iostream>
using namespace std;

int* targets;
int* friends;

int main() {
	int N; cin >> N;

	int M; cin >> M;
	targets = new int[M];
	for (int i = 0; i < M; i++)
		cin >> targets[i];

	friends = new int[N + 1];
	for (int i = 1; i <= N; i++)
		friends[i] = 0;

	for (int i = 0; i < M; i++) {
		int cnt = 0;
		for (int j = 1; j <= N; j++) {
			int B; cin >> B;

			if (B == targets[i]) {
				friends[j]++;
				cnt++;
			}
		}

		friends[targets[i]] += (N - cnt);
	}

	for (int i = 1; i <= N; i++)
		cout << friends[i] << endl;

	delete[] targets;
	delete[] friends;
}
