#include <iostream>
#include <queue>
using namespace std;

int strCnt[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };

int main() {
	string s1, s2; cin >> s1 >> s2;

	queue<int> love;
	for (int i = 0; i < s1.length(); i++) {
		love.push(strCnt[s1[i] - 'A']);
		love.push(strCnt[s2[i] - 'A']);
	}

	while (love.size() > 2) {
		int len = love.size();
		for (int i = 0; i < len - 1; i++) {
			int a1 = love.front();
			love.pop();
			love.push((a1 + love.front()) % 10);
		}
		love.pop();
	}

	cout << love.front() << love.back() << endl;
}
