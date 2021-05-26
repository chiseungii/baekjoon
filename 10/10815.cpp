#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

//bool isIn(vector<int> v, int n) {
//	int left = 0, right = v.size() - 1;
//	int mid;
//
//	while (left <= right) {
//		if (v[left] == n || v[right] == n)
//			return true;
//
//		mid = (left + right) / 2;
//
//		if (v[mid] == n) return true;
//		else if (n > v[mid]) left = mid + 1;
//		else right = mid - 1;
//	}
//
//	return false;
//}

int main() {
	int N; scanf("%d", &N);	// 숫자 카드의 개수
	//vector<int> cards;	// 숫자 카드
	map<int, bool> cards;

	for (int i = 0; i < N; i++) {
		int card; scanf("%d", &card);
		//cards.push_back(card);
		cards[card] = true;
	}
	//sort(cards.begin(), cards.end());

	int M; scanf("%d", &M);	// 정수의 개수

	for (int i = 0; i < M; i++) {
		int m; scanf("%d", &m);

		/*if (isIn(cards, m)) printf("1 ");
		else printf("0 ");*/

		if (cards[m]) printf("1 ");
		else printf("0 ");
	}
	printf("\n");
}
