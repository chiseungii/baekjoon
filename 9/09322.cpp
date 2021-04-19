#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2) {
	return p1.second < p2.second;
}

int main() {
	int T; cin >> T;	// 테케 수

	for (int tc = 0; tc < T; tc++) {
		int n; cin >> n;	// 한 문장 단어 수
		map<string, int> firstKey;	// <단어, 순서>

		// 제 1 공개키 입력
		for (int i = 0; i < n; i++) {
			string s; cin >> s;
			firstKey[s] = i + 1;
		}

		vector<int> secondKey;	// 입력되는 순서

		// 제 2 공개키 입력
		for (int i = 0; i < n; i++) {
			string s; cin >> s;
			secondKey.push_back(firstKey[s]);
		}

		vector<pair<string, int>> secrets;	// <단어, 재배치된 순서>

		// 암호문 입력
		for (int i = 0; i < n; i++) {
			string s; cin >> s;
			secrets.push_back(make_pair(s, secondKey[i]));
		}

		// 벡터 정렬
		sort(secrets.begin(), secrets.end(), compare);

		// 출력
		for (int i = 0; i < n; i++) {
			cout << secrets[i].first << ' ';
		}
		cout << endl;
	}
}
