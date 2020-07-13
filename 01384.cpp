#include <iostream>
#include <vector>
using namespace std;

int main() {
	int group = 1;
	while (1) {
		int n; cin >> n;
		if (!n) break;

		vector<string> names;
		vector<int> messages[20];
		for (int i = 0; i < n; i++) {
			string name; cin >> name;
			names.push_back(name);

			for (int j = 1; j < n; j++) {
				char c; cin >> c;
				if (c == 'N') messages[i].push_back(j);
			}
		}

		cout << "Group " << group++ << endl;
		bool isNeg = false;
		for (int i = 0; i < n; i++) {
			if (messages[i].size()) {
				for (int j = 0; j < messages[i].size(); j++) {
					int index = i - messages[i][j];
					if (index < 0) index += n;
					cout << names[index] << " was nasty about " << names[i] << '\n';
					isNeg = true;
				}
			}
		}

		if (!isNeg) cout << "Nobody was nasty\n";
		cout << endl;
	}
}
