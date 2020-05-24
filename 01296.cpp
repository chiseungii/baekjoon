#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	else return a.second > b.second;
}

int main() {
	string minsik; cin >> minsik;
	int N; cin >> N;

	vector<pair<string, int>> love;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		string s2 = s + minsik;

		int L = 0, O = 0, V = 0, E = 0;
		for (int j = 0; j < s2.length(); j++) {
			if (s2[j] == 'L') L++;
			else if (s2[j] == 'V') V++;
			else if (s2[j] == 'E') E++;
			else if (s2[j] == 'O') O++;
		}

		int success = (L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E);
		success %= 100;

		love.push_back({ s, success });
	}

	sort(love.begin(), love.end(), compare);
	cout << love[0].first << endl;
}
