#include <iostream>
#include <map>
using namespace std;

int main() {
	int A, B; cin >> A >> B;	// 집합 A와 B의 원소 개수
	map<int, bool> inA;	// A에 있는 원소들

	for (int i = 0; i < A; i++) {
		int a; cin >> a;
		inA[a] = true;
	}

	int commonCnt = 0;	// 교집합 원소 개수
	int resCnt = inA.size();	// 대칭 차집합 원소 개수
	for (int i = 0; i < B; i++) {
		int b; cin >> b;

		if (inA[b]) commonCnt++;
		else resCnt++;
	}
	resCnt -= commonCnt;

	cout << resCnt << endl;
}
