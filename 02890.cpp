#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
	return p1.second > p2.second;
}

int main() {
	int R, C; cin >> R >> C;

	vector<pair<int, int>> results;	// 팀 넘버, 배 위치
	for (int i = 0; i < R; i++) {
		string lane; cin >> lane;

		for (int j = 0; j < lane.length(); j++) {
			if (isdigit(lane[j])) {
				int num = lane[j] - '0';
				results.push_back(pair<int, int>(num, j));

				break;
			}
		}
	}
	sort(results.begin(), results.end(), compare);

	vector<pair<int, int>> prints;	// 팀 넘버, 등수
	int rank = 0, loc = C + 1;
	for (int i = 0; i < results.size(); i++) {
		if (results[i].second == loc)
			prints.push_back(pair<int, int>(results[i].first, rank));
		else {
			rank++; loc = results[i].second;
			prints.push_back(pair<int, int>(results[i].first, rank));
		}
	}
	sort(prints.begin(), prints.end());

	for (int i = 0; i < prints.size(); i++)
		cout << prints[i].second << endl;
}
