#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

char check[100001];

int main() {
	int n; cin >> n;

	stack<int> st; vector<char> result;
	int num = 1; bool no = false;
	for (int i = 1; i <= n; i++) {
		int a; scanf("%d", &a);

		if (st.empty() || st.top() < a) {
			while (st.empty() || st.top() != a) {
				st.push(num++);
				result.push_back('+');
			}
			st.pop();
			result.push_back('-');
		}
		else if (st.top() == a) {
			st.pop();
			result.push_back('-');
		}
		else {
			no = true;
			break;
		}
	}

	if (no) cout << "NO\n";
	else
		for (int i = 0; i < result.size(); i++)
			printf("%c\n", result[i]);
}
