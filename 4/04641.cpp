#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	while (1) {
		bool exit = false;
		vector<int> nums;
		while (1) {
			int a; cin >> a;
			if (a == -1) { exit = true; break; }
			if (a == 0) break;
			nums.push_back(a);
		}
		if (exit) break;
		sort(nums.begin(), nums.end());

		int cnt = 0;
		for (int i = 0; i < nums.size()-1; i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[j] == nums[i] * 2) {
					cnt++; break;
				}
			}
		}

		cout << cnt << endl;
	}
}
