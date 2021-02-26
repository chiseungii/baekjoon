/*
Dinamic Programming
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n; cin >> n;	// 자연수 n

	int DP[50001];
	DP[0] = 0; DP[1] = 1;

	for (int i = 2; i <= n; i++) {
		int root = sqrt(i);	// i의 제곱근

		int min_cnt = 5;
		for (int j = 1; j <= root; j++)
			if (DP[i - j * j] + 1 < min_cnt)
				min_cnt = DP[i - j * j] + 1;

		DP[i] = min_cnt;
	}

	cout << DP[n] << endl;
}
