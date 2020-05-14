#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Comp {
public:
	int S, C, L;
	int num;

public:
	Comp(int s, int c, int l, int n) {
		S = s;
		C = c;
		L = l;
		num = n;
	}
	bool operator > (Comp C) {
		if (this->S > C.S) return true;
		else if (this->S < C.S) return false;
		else {
			if (this->C < C.C) return true;
			else if (this->C > C.C) return false;
			else {
				if (this->L < C.L) return true;
				else return false;
			}
		}
	}
};

bool compare(Comp a, Comp b) {
	if (a.S == b.S) {
		if (a.C == b.C) {
			return a.L < b.L;
		}
		else return a.C < b.C;
	}
	else return a.S > b.S;
}

int main() {
	int N; cin >> N;

	vector<Comp> rank;
	for (int i = 0; i < N; i++) {
		int S, C, L; cin >> S >> C >> L;
		rank.push_back(Comp(S, C, L, i + 1));
	}

	sort(rank.begin(), rank.end(), compare);
	cout << rank[0].num << endl;
}
