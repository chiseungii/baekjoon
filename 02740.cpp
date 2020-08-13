#include <iostream>
using namespace std;

int A[100][100];
int B[100][100];
// int C[100][100];

int main() {
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> A[i][j];

	int K; cin >> M >> K;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < K; j++)
			cin >> B[i][j];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			int sum = 0;
			for (int k = 0; k < M; k++)
				sum += A[i][k] * B[k][j];
			// C[i][j] = sum;

			cout << sum << ' ';
		}
		cout << endl;
	}


}
