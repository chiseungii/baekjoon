#include <iostream>
#include <stack>
using namespace std;

int main() {
	string s; cin >> s;

	stack<char> st;
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			if (i != s.length() - 1 && s[i + 1] == ')') {
				cnt += st.size();
				i++;
			}
			else {
				st.push(1);
				cnt++;
			}
		}
		else st.pop();
	}

	cout << cnt << endl;
}
