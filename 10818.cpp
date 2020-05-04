#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N;

	int* nums = new int[N];
	for (int i = 0; i < N; i++)
		cin >> nums[i];

	sort(nums, nums + N);
	cout << nums[0] << ' ' << nums[N - 1] << endl;

	delete[] nums;
}
