#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N;

	vector<int> nums;
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		nums.push_back(num);
	}

	vector<int> copy_nums = nums;
	sort(copy_nums.begin(), copy_nums.end());
	copy_nums.erase(unique(copy_nums.begin(), copy_nums.end()), copy_nums.end());

	map<int, int> zip;
	for (int i = 0; i < copy_nums.size(); i++)
		zip[copy_nums[i]] = i;

	for (int i = 0; i < nums.size(); i++)
		cout << zip[nums[i]] << ' ';
	cout << endl;
}
