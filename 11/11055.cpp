#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// char check[1000];

int main() {
	int N; cin >> N;

	vector<int> nums;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		nums.push_back(a);
	}

	vector<int> DP;
	for (int i = 0; i < nums.size(); i++) {
		int max_num = -1, max_DP = nums[i];
		for (int j = i - 1; j >= 0; j--) {
			if (nums[j]<nums[i] && DP[j]>max_num) {
				max_num = DP[j];
				max_DP = DP[j] + nums[i];
			}
		}

		DP.push_back(max_DP);
	}

	cout << *max_element(DP.begin(), DP.end()) << endl;

	/*
	vector<pair<int, int>> DP;	// 이전 index, 수열 길이
	for (int i = 0; i < nums.size(); i++) {
		int max_num = -1, max_index = -1;
		for (int j = i - 1; j >= 0; j--) {
			if (nums[j]<nums[i] && nums[j]>max_num) {
				max_num = nums[j];
				max_index = j;
			}
		}

		if (max_index == -1) DP.push_back(make_pair(-1, 1));
		else DP.push_back(make_pair(max_index, DP[max_index].second + 1));
	}
	*/
}
