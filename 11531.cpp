#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<pair<char, int>> logs;
	int cnt = 0, penalty = 0;
	while (1) {
		int m; cin >> m;
		if (m == -1) break;

		char name; string correct;
		cin >> name >> correct;

		int index = -1;
		for (int i = 0; i < logs.size(); i++) {
			if (logs[i].first == name) {
				index = i;
				break;
			}
		}

		if (correct == "right") {
			cnt++;
			if (index != -1)
				penalty += (m + logs[index].second * 20);
			else
				penalty += m;
		}
		else {
			if (index == -1)
				logs.push_back(pair<char, int>(name, 1));
			else
				logs[index].second++;
		}
	}

	cout << cnt << ' ' << penalty << endl;
}
