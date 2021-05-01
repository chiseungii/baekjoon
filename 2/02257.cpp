#include <iostream>
#include <map>
#include <vector>
#include <deque>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	string s; cin >> s;	// 화학식
	stack<int> weight;	// 화학식량
	map<char, int> atoms;	// 원자량

	// 원자량 저장
	atoms['H'] = 1;
	atoms['C'] = 12;
	atoms['O'] = 16;

	for (int i = 0; i < s.length(); i++) {
		// 여는 괄호
		if (s[i] == '(') weight.push(0);
		// 닫는 괄호
		else if (s[i] == ')') {
			// 뒤에 숫자 있으면 더하기
			if (i < s.length() - 1 && isdigit(s[i + 1]))
				weight.top() *= s[i + 1] - '0';

			int tmp = weight.top();
			weight.pop();

			if (weight.empty()) weight.push(tmp);
			else weight.top() += tmp;
		}
		// 알파벳
		else if (isalpha(s[i])) {
			int w = atoms[s[i]];

			// 뒤에 숫자 있으면 곱하기
			if (i < s.length() - 1 && isdigit(s[i + 1]))
				w *= s[i + 1] - '0';

			if (weight.empty()) weight.push(w);
			else weight.top() += w;
		}
		// 숫자
		else continue;
	}

	cout << weight.top() << endl;
}
