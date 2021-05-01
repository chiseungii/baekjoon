#include <iostream>
#include <map>
#include <vector>
#include <deque>
using namespace std;

int main() {
	int T; cin >> T;	// 테케 수

	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;	// 카드 개수
		deque<char> str;

		for (int i = 0; i < N; i++) {
			char c; cin >> c;

			if (str.empty()) str.push_back(c);
			else if (c <= str.front()) str.push_front(c);
			else str.push_back(c);
		}

		for (int i = 0; i < str.size(); i++)
			cout << str[i];
		cout << endl;
	}
}
