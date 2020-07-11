#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N; cin >> N;
	vector<string> files;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		files.push_back(s);
	}

	int len = files[0].length();
	string pattern = "";
	for (int i = 0; i < len; i++) {
		bool same = true;
		char cmp = files[0][i];
		for (int j = 1; j < files.size(); j++) {
			if (files[j][i] != cmp) {
				same = false;
				break;
			}
		}

		if (same) pattern += cmp;
		else pattern += "?";
	}

	cout << pattern << endl;
}
