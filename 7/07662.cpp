/*
multiset
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
	int T; cin >> T;	// 테스트케이스

	for (int tc = 0; tc < T; tc++) {
		int k; cin >> k;	// 연산 개수
		multiset<int> heap;		// set

		for (int i = 0; i < k; i++) {
			char op; cin >> op;
			int n; cin >> n;

			if (op == 'I') heap.insert(n);
			else {
				if (heap.empty()) continue;
				else if (n == 1) heap.erase(--heap.end());
				else heap.erase(heap.begin());
			}
		}

		if (heap.empty()) cout << "EMPTY\n";
		else cout << *(--heap.end()) << ' ' << *heap.begin() << endl;
	}
}
