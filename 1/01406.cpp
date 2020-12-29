#include <iostream>
#include <stack>
using namespace std;

int main() {
	string s; cin >> s;
	int M; cin >> M;

	stack<char> left, right;
	for (int i = 0; i < s.length(); i++)
		left.push(s[i]);

	for (int i = 0; i < M; i++) {
		char op; cin >> op;

		if (op == 'L') {
			if (left.size()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (op == 'D') {
			if (right.size()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (op == 'B') {
			if (left.size())
				left.pop();
		}
		else {
			char c; cin >> c;
			left.push(c);
		}
	}

	while (left.size()) {
		right.push(left.top());
		left.pop();
	}

	while (right.size()) {
		cout << right.top();
		right.pop();
	}
	cout << endl;
}
