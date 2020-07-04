#include <iostream>
using namespace std;

int Mi[1000];

int main() {
	int N, M; cin >> N >> M;
	for (int i = 0; i < M; i++)
		cin >> Mi[i];

	int sum = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < M; j++) {
			if (i % Mi[j] == 0) {
				sum += i;
				break;
			}
		}
	}

	cout << sum << endl;
}
