#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2) {
	return p1.second < p2.second;
}

int main() {
	int K, L; scanf("%d %d", &K, &L);
	// 수강 가능 인원 K, 대기목록 길이 L
	char buffer[10];	// string 입력용

	map<string, int> ready;	// 대기목록
	int readyNum = 1;	// 대기번호

	for (int i = 0; i < L; i++) {
		scanf("%s", buffer);
		string id = buffer;	// 학번
		ready[id] = readyNum++;
	}

	// 벡터로 옮겨서 정렬
	vector<pair<string, int>> sortedReady(ready.begin(), ready.end());
	sort(sortedReady.begin(), sortedReady.end(), compare);

	for (int i = 0; i < sortedReady.size() && i < K; i++) {
		printf("%s\n", sortedReady[i].first.c_str());
	}
}
