#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int cnt[4] = { 0, 0, 0, 0 };	// 소문자, 대문자, 숫자, 공백
	char c;
	while (scanf("%c", &c) != EOF) {
		if (c == '\n') {
			for (int i = 0; i < 4; i++) {
				cout << cnt[i] << ' ';
				cnt[i] = 0;
			}
			cout << endl;
		}

		if (isdigit(c)) cnt[2]++;
		else if (c == ' ') cnt[3]++;
		else if (isupper(c)) cnt[1]++;
		else if (islower(c)) cnt[0]++;
	}
}
