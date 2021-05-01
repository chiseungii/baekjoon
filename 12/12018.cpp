#include <iostream>
#include <map>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;	// 과목 수
	int m; cin >> m;	// 주어진 마일리지

	vector<int> needs;	// 필요한 마일리지

	for (int i = 0; i < n; i++) {
		int P; cin >> P;	// 신청한 사람 수
		int L; cin >> L;	// 수강 인원

		vector<int> mileages;

		for (int j = 0; j < P; j++) {
			int mileage; cin >> mileage;	// 마일리지
			mileages.push_back(mileage);
		}
		sort(mileages.begin(), mileages.end(), greater<int>());

		if (P < L) needs.push_back(1);
		else needs.push_back(mileages[L - 1]);
	}
	sort(needs.begin(), needs.end());

	int cnt = 0;	// 신청 가능한 과목 수

	for (int i = 0; i < needs.size(); i++) {
		// 갖고 있는 마일리지로 낼 수 있으면
		if (needs[i] <= m) {
			m -= needs[i];
			cnt++;
		}
		// 모자라면
		else break;
	}

	cout << cnt << endl;
}
