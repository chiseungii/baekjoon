#include <iostream>
#include <string>
using namespace std;

bool found_nemo(string s) {
	string nemo[8] = { "EMO", "EMo", "EmO", "eMO", "Emo", "eMo", "emO", "emo" };
	for (int i = 0; i < s.length() - 3; i++) {
		if (s[i] == 'N' || s[i] == 'n') {
			for (int j = 0; j < 8; j++)
				if (s.substr(i + 1, 3) == nemo[j])
					return true;
		}
	}

	return false;
}

int main() {
	while (1) {
		string s; getline(cin, s);
		if (s == "EOI") break;

		if (found_nemo(s))
			cout << "Found\n";
		else
			cout << "Missing\n";
	}
}
