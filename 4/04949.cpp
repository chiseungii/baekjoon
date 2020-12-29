#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	while (1) {
		string input;
		getline(cin, input);

		if (input == ".") break;

		stack<char> st; bool no = false;
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '(') st.push('(');
			else if (input[i] == '[') st.push('[');
			else if (input[i] == ')') {
				if (st.empty() || st.top() != '(') {
					no = true;
					break;
				}
				else st.pop();
			}
			else if (input[i] == ']') {
				if (st.empty() || st.top() != '[') {
					no = true;
					break;
				}
				else st.pop();
			}
		}

		if (no || st.size()) cout << "no\n";
		else cout << "yes\n";
	}
}
