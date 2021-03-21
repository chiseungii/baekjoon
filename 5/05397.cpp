#include <iostream>
#include <queue>
using namespace std;

string keyLoad(string pwd) {
	deque<char> left, right;	// 커서 왼쪽, 오른쪽 덱

	for (int i = 0; i < pwd.length(); i++) {
		// 백스페이스
		if (pwd[i] == '-') {
			// 지울 거 없음
			if (left.empty()) continue;
			// 왼쪽 없애기
			else left.pop_back();
		}
		// 왼쪽 화살표
		else if (pwd[i] == '<') {
			// 갈 데가 없음
			if (left.empty()) continue;
			// 왼쪽꺼 오른쪽으로 이동
			else {
				right.push_front(left.back());
				left.pop_back();
			}
		}
		// 오른쪽 화살표
		else if (pwd[i] == '>') {
			// 갈 데가 없음
			if (right.empty()) continue;
			// 오른쪽꺼 왼쪽으로 이동
			else {
				left.push_back(right.front());
				right.pop_front();
			}
		}
		// 나머지는 그대로 입력
		else left.push_back(pwd[i]);
	}

	string result = "";

	// 왼쪽 더하기
	while (!left.empty()) {
		result += left.front();
		left.pop_front();
	}

	// 오른쪽 더하기
	while (!right.empty()) {
		result += right.front();
		right.pop_front();
	}

	return result;
}

int main() {
	int T; cin >> T;	// 테케

	for (int tc = 0; tc < T; tc++) {
		string password; cin >> password;	// 입력
		cout << keyLoad(password) << endl;
	}
}
