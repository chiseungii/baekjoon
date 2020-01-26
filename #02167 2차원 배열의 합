#include <iostream>
using namespace std;

int N, M, K, I, J, X, Y;
int nums[301][301];

int DP() {
	int result = 0;
	for (int i = I; i <= X; i++)
		for (int j = J; j <= Y; j++)
			result += nums[i][j];

	return result;
}

int main() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> nums[i][j];


	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> I >> J >> X >> Y;
		cout << DP() << endl;
	}
}
