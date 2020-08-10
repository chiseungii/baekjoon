#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Candidate {
	int num;
	int score;
	int cnt[3];	// 1점, 2점, 3점 순

public:
	Candidate(int n) {
		num = n;
		score = 0;
		cnt[0] = cnt[1] = cnt[2] = 0;
	}
	void vote(int s) {
		score += s;
		cnt[s - 1]++;
	}
	bool operator < (Candidate C) {
		if (score == C.score) {
			if (cnt[2] == C.cnt[2]) {
				return cnt[1] > C.cnt[1];
			}
			else return cnt[2] > C.cnt[2];
		}
		else return score > C.score;
	}
	bool operator == (Candidate C) {
		if (score == C.score && cnt[2] == C.cnt[2] && cnt[1] == C.cnt[1])
			return true;
		else return false;
	}
	int getScore() { return score; }
	int getNum() { return num; }
};

int main() {
	vector<Candidate> C;
	C.push_back(Candidate(1));
	C.push_back(Candidate(2));
	C.push_back(Candidate(3));

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int c1, c2, c3; cin >> c1 >> c2 >> c3;
		C[0].vote(c1);
		C[1].vote(c2);
		C[2].vote(c3);
	}
	sort(C.begin(), C.end());

	if (C[0] == C[1]) cout << 0 << ' ' << C[0].getScore() << endl;
	else cout << C[0].getNum() << ' ' << C[0].getScore() << endl;
}
