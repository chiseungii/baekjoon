#include <iostream>
#include <vector>
using namespace std;

#define MOD 10007

int main() {
	int n; cin >> n;

	vector<int> DP = { 1, 1 };
	for (int i = 2; i <= n; i++)
		DP.push_back((DP[i - 1] + DP[i - 2]) % MOD);

	cout << DP[n] << endl;
}
