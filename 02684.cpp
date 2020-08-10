#include <iostream>
#include <string>
using namespace std;

int main() {
	int P; cin >> P;

	for (int i = 0; i < P; i++) {
		string s; cin >> s;

		int cnt[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
		for (int j = 0; j < s.length() - 2; j++) {
			string tmp = s.substr(j, 3);
			if (tmp == "TTT") cnt[0]++;
			else if (tmp == "TTH") cnt[1]++;
			else if (tmp == "THT") cnt[2]++;
			else if (tmp == "THH") cnt[3]++;
			else if (tmp == "HTT") cnt[4]++;
			else if (tmp == "HTH") cnt[5]++;
			else if (tmp == "HHT") cnt[6]++;
			else cnt[7]++;
		}

		for (int j = 0; j < 8; j++)
			cout << cnt[j] << ' ';
		cout << endl;
	}
}
