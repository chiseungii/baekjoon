#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	while (b) {
		int c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main() {
	int t; cin >> t;

	for (int tc = 0; tc < t; tc++) {
		int n; cin >> n;
		vector<int> nums;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			nums.push_back(a);
		}
		sort(nums.begin(), nums.end());

		long long sum = 0;
		for (int i = 0; i < nums.size() - 1; i++)
			for (int j = i + 1; j < nums.size(); j++)
				sum += gcd(nums[i], nums[j]);

		cout << sum << endl;
	}
}
