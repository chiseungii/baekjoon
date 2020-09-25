#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N;

	vector<int> nums;
	for (int i = 0; i < N; i++) {
		int A; cin >> A;
		nums.push_back(A);
	}

	vector<int> DP = { 1 };
	for (int i = 1; i < N; i++) {
		int max_DP = 0;
		for (int j = i - 1; j >= 0; j--)
			if (nums[j]<nums[i] && DP[j]>max_DP)
				max_DP = DP[j];
		DP.push_back(max_DP + 1);
	}

	cout << *max_element(DP.begin(), DP.end()) << endl;
}
