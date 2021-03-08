/*
BFS
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int runD(int num) {
	return num * 2 % 10000;
}

int runS(int num) {
	num--;
	return num == -1 ? 9999 : num;
}

int runL(int num) {
	int tmp = num / 1000;
	
	num %= 1000;
	num = num * 10 + tmp;

	return num;
}

int runR(int num) {
	int tmp = num % 10;

	num /= 10;
	num = tmp * 1000 + num;

	return num;
}

int main() {
	int T; scanf("%d", &T);	// 테스트케이스 수

	for (int tc = 0; tc < T; tc++) {
		int A, B; scanf("%d %d", &A, &B);

		// BFS
		queue<pair<int, string>> q;	// BFS용 큐
		bool check[10000];			// 방문 체크용

		for (int i = 0; i < 10000; i++) check[i] = false;

		// 제일 처음 수 체크
		check[A] = true;
		q.push(make_pair(A, ""));

		string min_op = "";	// 최소 명령어

		while (q.size()) {
			pair<int, string> tmp = q.front();
			q.pop();

			if (tmp.first == B) {
				printf("%s\n", tmp.second.c_str());
				break;
			}

			// D
			int calNum = tmp.first * 2 % 10000;
			if (!check[calNum]) {
				check[calNum] = true;
				q.push(make_pair(calNum, tmp.second + 'D'));
			}

			// S
			calNum = tmp.first == 0 ? 9999 : tmp.first - 1;
			if (!check[calNum]) {
				check[calNum] = true;
				q.push(make_pair(calNum, tmp.second + 'S'));
			}

			// L
			calNum = (tmp.first % 1000) * 10 + (tmp.first / 1000);
			if (!check[calNum]) {
				check[calNum] = true;
				q.push(make_pair(calNum, tmp.second + 'L'));
			}

			// R
			calNum = (tmp.first % 10) * 1000 + tmp.first / 10;
			if (!check[calNum]) {
				check[calNum] = true;
				q.push(make_pair(calNum, tmp.second + 'R'));
			}
		}

		printf("%s\n", min_op.c_str());
	}
}
