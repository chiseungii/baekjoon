#include <iostream>
#include <set>
using namespace std;

int main() {
	int nA, nB; cin >> nA >> nB;	// A와 B의 원소 개수
	set<int> nums;	// 원소

	for (int i = 0; i < nA; i++) {
		int a; cin >> a;
		nums.insert(a);
	}

	for (int i = 0; i < nB; i++) {
		int b; cin >> b;

		// A에 있으면 카운트 -1하고 A에서 제외
		if (nums.find(b) != nums.end()) {
			nA--;
			nums.erase(b);
		}
	}

	set<int>::iterator it;
	cout << nA << endl;
	for (it = nums.begin(); it != nums.end(); it++)
		cout << *it << ' ';
	cout << endl;
}
