#include <iostream>
using namespace std;

int* nums;

int main() {
	int N; cin >> N;
	nums = new int[N];
	for (int i = 0; i < N; i++)
		cin >> nums[i];

	int v; cin >> v;
	
	int cnt = 0;
	for (int i = 0; i < N; i++)
		if (nums[i] == v)
			cnt++;

	cout << cnt << endl;

	delete[] nums;
}
