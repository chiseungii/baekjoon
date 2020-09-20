#include <iostream>
#include <algorithm>
using namespace std;

#define INF 2147483647

int DP[100001];

int main() {
	// input
	int N; cin >> N;

	// init
	DP[0] = 0;
	DP[1] = 1;
	for (int i = 2; i <= N; i++) DP[i] = INF;

	// Dynamic Programming
	for (int i = 2; i <= N; i++)
		for (long long j = 1; j * j <= i; j++)
			DP[i] = min(DP[i], DP[i - j * j] + 1);

	// print
	cout << DP[N] << endl;
}
