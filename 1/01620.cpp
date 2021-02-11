/*
map
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <map>
#include <cstring>
using namespace std;

char str[21];	// 문자열 입력용

int main() {
	int N; scanf("%d", &N);	// 포켓몬 수
	int M; scanf("%d", &M);	// 문제 수

	map<string, int> dogam_name;	// 이름으로 찾는 도감
	map<int, string> dogam_num;		// 번호로 찾는 도감

	for(int i=0; i<N; i++) {
		scanf("%s", str);
		string pokemon = str;

		dogam_name[pokemon] = i + 1;
		dogam_num[i + 1] = pokemon;
	}

	for(int i=0; i<M; i++) {
		scanf("%s", str);
		string s = str;

		// 숫자일 경우
		if (isdigit(s[0])) {
			int num = stoi(s);
			printf("%s\n", dogam_num[num].c_str());
		}
		// 이름일 경우
		else {
			printf("%d\n", dogam_name[s]);
		}
	}
}
