#include <iostream>
#include <algorithm>
using namespace std;

bool same_words(string w1[6], string w2[6]) {
	for (int i = 0; i < 6; i++)
		if (w1[i] != w2[i]) return false;

	return true;
}

int main() {
	string words[6];
	for (int i = 0; i < 6; i++)
		cin >> words[i];

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (j == i) continue;

			for (int k = 0; k < 6; k++) {
				if (k == i || k == j) continue;

				string check[6];
				check[0] = words[i];
				check[1] = words[j];
				check[2] = words[k];

				string tmp = "";
				tmp += words[i][0];
				tmp += words[j][0];
				tmp += words[k][0];
				check[3] = tmp;

				tmp = "";
				tmp += words[i][1];
				tmp += words[j][1];
				tmp += words[k][1];
				check[4] = tmp;

				tmp = "";
				tmp += words[i][2];
				tmp += words[j][2];
				tmp += words[k][2];
				check[5] = tmp;

				sort(check, check + 6);

				if (same_words(words, check)) {
					cout << words[i] << endl;
					cout << words[j] << endl;
					cout << words[k] << endl;

					return 0;
				}
			}
		}
	}

	cout << 0 << endl;
}
