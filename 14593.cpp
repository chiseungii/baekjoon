#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Participant {
	int num;
	int S, C, L;

public:
	Participant(int n, int S, int C, int L) {
		num = n;
		this->S = S;
		this->C = C;
		this->L = L;
	}
	bool operator < (Participant p) {
		if (S == p.S) {
			if (C == p.C) return L < p.L;
			else return C < p.C;
		}
		else return S > p.S;
	}
	int getNum() { return num; }
};

int main() {
	int N; cin >> N;

	vector<Participant> P;
	for (int i = 0; i < N; i++) {
		int S, C, L; cin >> S >> C >> L;
		P.push_back(Participant(i + 1, S, C, L));
	}
	sort(P.begin(), P.end());

	cout << P[0].getNum() << endl;
}
