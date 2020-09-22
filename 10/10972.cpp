#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N;

	// 첫번째 순열 저장
	vector<int> first_per;
	for (int i = 1; i <= N; i++)
		first_per.push_back(i);

	// 순열 입력
	vector<int> per;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		per.push_back(a);
	}

	// 다음 순열 비교
	next_permutation(per.begin(), per.end());
	if (per == first_per) cout << -1 << endl;
	else {
		for (int i = 0; i < per.size(); i++)
			cout << per[i] << ' ';
		cout << endl;
	}
}
