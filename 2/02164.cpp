#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N; cin >> N;

	queue<int> nums;	// 카드 덱

	// 1~N 큐에 저장
	for (int i = 1; i <= N; i++)
		nums.push(i);

	while(nums.size() > 1) {
		nums.pop();
		nums.push(nums.front());
		nums.pop();
	}

	cout << nums.front() << endl;
}
