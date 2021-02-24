#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main() {
	int M; scanf("%d", &M);	// 연산의 수
	bool S[21];				// 집합

	char buffer[10];		// 입력용

	for (int i = 1; i < 21; i++) S[i] = false;

	for (int i = 0; i < M; i++) {
		scanf("%s", buffer);
		string str = buffer;

		if (str == "all") {
			for (int i = 1; i < 21; i++) S[i] = true;
		}
		else if (str == "empty") {
			for (int i = 0; i < 21; i++) S[i] = false;
		}
		else {
			int x; scanf("%d", &x);

			if (str == "add") S[x] = true;
			else if (str == "remove") S[x] = false;
			else if (str == "check") printf("%d\n", S[x]);
			else S[x] = !S[x];
		}
	}
}
