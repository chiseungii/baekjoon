#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<long long> nums;
int N;

bool isIn(long long n) {
	int left = 0, right = N - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (nums[mid] == n) return true;
		else if (n > nums[mid]) left = mid + 1;
		else right = mid - 1;
	}

	return false;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		long long n; scanf("%lld", &n);
		nums.push_back(n);
	}
	sort(nums.begin(), nums.end());

	int M; scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		long long m; scanf("%lld", &m);
		printf("%d\n", isIn(m));
	}
}
