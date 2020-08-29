#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char ops[9];		// input

int k;

bool isImpossible(vector<int> s) {
	for (int i = 0; i < k; i++) {
		int a = s[i];
		int b = s[i + 1];

		if (ops[i] == '<') {
			if (a > b) return false;
		}
		else {
			if (a < b) return false;
		}
	}

	return true;
}

int main() {
	// input
	cin >> k;

	for (int i = 0; i < k; i++)
		cin >> ops[i];

	// 최대값 찾기
	vector<int> max_nums; int num = 9;
	for (int i = 0; i < k + 1; i++)
		max_nums.push_back(num--);

	while (!isImpossible(max_nums))
		prev_permutation(max_nums.begin(), max_nums.end());

	// 최대값 출력
	for (int i = 0; i < max_nums.size(); i++)
		cout << max_nums[i];
	cout << endl;

	// 최소값 찾기
	vector<int> min_nums; num = 0;
	for (int i = 0; i < k + 1; i++)
		min_nums.push_back(num++);

	while (!isImpossible(min_nums))
		next_permutation(min_nums.begin(), min_nums.end());

	// 최소값 출력
	for (int i = 0; i < min_nums.size(); i++)
		cout << min_nums[i];
	cout << endl;
}
