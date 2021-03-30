#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int N; cin >> N;	// 학생 수
	vector<int> nums(N);	// 번호표

	for (int i = 0; i < N; i++)
		cin >> nums[i];

	int cur_num = 1;	// 지금 차례인 번호
	int index = 0;	// 번호표 인덱스
	bool possible = true;	// 간식을 받을 수 있는지
	stack<int> ready;	// 대기줄

	while (cur_num <= N) {
		// 맨 앞 줄이 차례인 경우
		if (index < N && nums[index] == cur_num) {
			index++;
			cur_num++;
		}
		// 대기줄 맨 앞이 차례인 경우
		else if (!ready.empty() && ready.top() == cur_num) {
			ready.pop();
			cur_num++;
		}
		// 둘 다 없는 경우 스택에 넣음
		else {
			while (index < N && nums[index] != cur_num)
				ready.push(nums[index++]);

			// 다 넣어서 없는 경우
			if (index >= N) {
				possible = false;
				break;
			}
			// 있는 경우
			else {
				index++;
				cur_num++;
			}
		}
	}

	if (possible) cout << "Nice\n";
	else cout << "Sad\n";
}
