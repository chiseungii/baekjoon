#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int nums[3];
	cin >> nums[0] >> nums[1] >> nums[2];
	sort(nums, nums + 3);

	int d1 = nums[1] - nums[0];
	int d2 = nums[2] - nums[1];

	if (d1 == d2) cout << nums[2] + d2;
	else if (d1 > d2) cout << nums[0] + d2;
	else cout << nums[1] + d1;
}
