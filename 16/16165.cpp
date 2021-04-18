#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class GirlGroup {
public:
	int memberCnt;
	vector<string> members;

	GirlGroup() { memberCnt = 0; }
	GirlGroup(int cnt) {
		memberCnt = cnt;
	}

	void addMember(string name) {
		members.push_back(name);
	}

	void printMembers() {
		sort(members.begin(), members.end());
		for (int i = 0; i < memberCnt; i++) {
			cout << members[i] << endl;
		}
	}
};

int main() {
	int N; cin >> N;	// 걸그룹의 수
	int M; cin >> M;	// 문제의 수

	map<string, GirlGroup> search_team;	// 팀 이름으로 검색
	map<string, string> search_name;	// 사람 이름으로 검색

	for (int i = 0; i < N; i++) {
		string team; cin >> team;
		int n; cin >> n;
		GirlGroup tmp(n);

		for (int j = 0; j < n; j++) {
			string name; cin >> name;
			tmp.addMember(name);
			search_name[name] = team;
		}

		search_team[team] = tmp;
	}

	for (int i = 0; i < M; i++) {
		string s; cin >> s;
		int n; cin >> n;	// 0이면 팀 이름, 1이면 사람 이름

		if (n == 0) search_team[s].printMembers();
		else cout << search_name[s] << endl;
	}
}
