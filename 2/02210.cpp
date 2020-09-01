#include <iostream>
#include <vector>
using namespace std;

char board[5][5];	// input
vector<string> nums;	// 가능한 숫자들

int di[4] = { 1, 0, -1, 0 };
int dj[4] = { 0, 1, 0, -1 };

void DFS(string s, int a, int b) {
	if (s.length() == 6) {
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == s) return;
		}
		nums.push_back(s);
		return;
	}

	for (int i = 0; i < 4; i++) {
		int move_i = a + di[i];
		int move_j = b + dj[i];

		if (move_i < 0 || move_i >= 5) continue;
		else if (move_j < 0 || move_j >= 5) continue;
		else DFS(s + board[move_i][move_j], move_i, move_j);
	}
}

int main() {
	// input
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> board[i][j];

	// DFS
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			DFS("", i, j);

	// print
	cout << nums.size() << endl;
}
