#include <iostream>
#include <vector>
using namespace std;

#define MOD 15746

int main() {
	int N; cin >> N;

	vector<int> DP = { 1, 1 };
	for (int i = 2; i <= N; i++)
		DP.push_back((DP[i - 1] + DP[i - 2]) % MOD);

	cout << DP[N] << endl;
}
