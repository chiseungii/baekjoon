#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <map>
using namespace std;

int main() {
	int N, M; scanf("%d %d", &N, &M);
	char str[25];

	map<string, string> passwords;

	for (int i = 0; i < N; i++) {
		scanf("%s", str);
		string url = str;

		scanf("%s", str);
		string password = str;

		passwords[url] = password;
	}

	for (int i = 0; i < M; i++) {
		scanf("%s", str);
		string url = str;
		cout << passwords[url] << endl;
	}
}
