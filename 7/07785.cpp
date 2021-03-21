#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <set>
using namespace std;

int main() {
	int n; scanf("%d", &n);	// 출입 기록의 수
	set<string> working;	// 일하는 중인 직원

	char buf[10];	// 입력용

	for (int i = 0; i < n; i++) {
		scanf("%s", buf);
		string name = buf;
		scanf("%s", buf);
		string state = buf;

		if (state == "enter") working.insert(name);
		else working.erase(name);
	}

	set<string>::reverse_iterator it;
	for (it = working.rbegin(); it != working.rend(); it++)
		cout << *it << '\n';
}
