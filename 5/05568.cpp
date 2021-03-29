/*
vector 중복 제거가 안 돼서
set으로 바꿈
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main() {
	int n; cin >> n;	// 카드 개수
	int k; cin >> k;	// nCk
	int cards[10];	// 카드

	for (int i = 0; i < n; i++)
		cin >> cards[i];

	vector<int> cmb;	// 조합

	for (int i = 0; i < k; i++)
		cmb.push_back(i);
	for (int i = 0; i < n - k; i++)
		cmb.push_back(-1);

	vector<int> cpy_cmb = cmb;	// 종료 체크용
	int num[10];	// 임시 숫자 배치용
	set<int> numbers;	// 만들어진 숫자들

	while (1) {
		for (int i = 0; i < cmb.size(); i++)
			if (cmb[i] != -1)
				num[cmb[i]] = cards[i];

		int number = 0;
		for (int i = 0; i < k; i++) {
			if (num[i] >= 10)
				number = number * 100 + num[i];
			else number = number * 10 + num[i];
		}
		numbers.insert(number);
		// numbers.push_back(number);

		next_permutation(cmb.begin(), cmb.end());
		if (cmb == cpy_cmb) break;
	}

	// 중복 제거
	// numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());

	cout << numbers.size() << endl;
}
