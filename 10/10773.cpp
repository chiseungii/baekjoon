#include <iostream>
#include <stack>
using namespace std;

int main() {
	int K; cin >> K;

	stack<int> st;
	for (int i = 0; i < K; i++) {
		int a; cin >> a;

		if (a == 0) st.pop();
		else st.push(a);
	}

	long long sum = 0;
	while (st.size()) {
		sum += st.top();
		st.pop();
	}

	cout << sum << endl;
}
