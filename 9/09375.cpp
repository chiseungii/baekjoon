#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T; cin >> T;	// 테케 수

	for (int tc = 0; tc < T; tc++) {
		int n; cin >> n;	// 의상 수
		vector<pair<string, vector<string>>> clothes;	// 의상 종류, 의상 이름들

		for (int i = 0; i < n; i++) {
			string name, category;
			cin >> name >> category;

			bool flag = false;
			for (int j = 0; j < clothes.size(); j++) {
				if (clothes[j].first == category) {
					flag = true;
					clothes[j].second.push_back(name);
					break;
				}
			}

			if (!flag) {
				vector<string> tmp;
				tmp.push_back(name);
				clothes.push_back(make_pair(category, tmp));
			}
		}

		int result = 1;
		for (int i = 0; i < clothes.size(); i++)
			result *= (clothes[i].second.size() + 1);

		cout << result - 1 << endl;
	}
}
