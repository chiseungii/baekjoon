#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int scores[101];

bool compare(pair<int, int> p1, pair<int, int> p2) {
	return p1.second > p2.second;
}

int main() {
	int N; cin >> N;

	for (int i = 0; i < N * (N - 1) / 2; i++) {
		int A, B, C, D; cin >> A >> B >> C >> D;

		if (C == D) { scores[A]++; scores[B]++; }
		else if (C > D) scores[A] += 3;
		else scores[B] += 3;
	}

	vector<pair<int, int>> rank;	// 팀 넘버, 승점
	for (int i = 1; i <= N; i++)
		rank.push_back(pair<int, int>(i, scores[i]));
	sort(rank.begin(), rank.end(), compare);

	int last = rank[0].second, rank_cnt = 1;
	rank[0].second = 1;
	for (int i = 1; i < rank.size(); i++) {
		rank_cnt++;
		if (rank[i].second == last)
			rank[i].second = rank[i - 1].second;
		else {
			last = rank[i].second;
			rank[i].second = rank_cnt;
		}
	}
	sort(rank.begin(), rank.end());

	for (int i = 0; i < rank.size(); i++)
		cout << rank[i].second << endl;
}
