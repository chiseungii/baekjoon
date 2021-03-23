/*
<algorithm> 헤더파일 안의
binary_search() 함수 이용
(직접 구현했을 때는 시간 초과)
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T; scanf("%d", &T);	// 테케 수

	for (int tc = 0; tc < T; tc++) {
		int N; scanf("%d", &N);	// 수첩1에 적은 정수의 개수
		vector<int> note;	// 수첩1

		for (int i = 0; i < N; i++) {
			int a; scanf("%d", &a);
			note.push_back(a);
		}
		// 수첩 정렬
		sort(note.begin(), note.end());

		int M; scanf("%d", &M);	// 수첩2에 적은 정수의 개수
		
		for (int i = 0; i < M; i++) {
			int a; scanf("%d", &a);
			printf("%d\n", binary_search(note.begin(), note.end(), a));
		}
	}
}
