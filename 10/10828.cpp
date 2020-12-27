#include <iostream>
#include <stack>
using namespace std;

int main() {
	int N; cin >> N;
	stack<int> s;

	for (int i = 0; i < N; i++) {
		string op; cin >> op;

		if (op == "push") {
			int X; cin >> X;
			s.push(X);
		}
		else if (op == "pop") {
			if (s.empty()) cout << -1 << endl;
			else {
				int tmp = s.top();
				s.pop();
				cout << tmp << endl;
			}
		}
		else if (op == "size")
			cout << s.size() << endl;
		else if (op == "empty")
			cout << s.empty() << endl;
		else {
			if (s.empty()) cout << -1 << endl;
			else cout << s.top() << endl;
		}
	}
}
