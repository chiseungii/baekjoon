#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string s; getline(cin, s);

	vector<string> words;
	int index = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			words.push_back(s.substr(index, i - index));
			index = i + 1;
		}
	}
	words.push_back(s.substr(index));

	string excepts[10] = { "i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili" };
	cout << (char)toupper(words[0][0]);
	for (int i = 1; i < words.size(); i++) {
		bool cont = false;
		for (int j = 0; j < 10; j++) {
			if (words[i] == excepts[j]) {
				cont = true;
				break;
			}
		}

		if (cont) continue;
		else cout << (char)toupper(words[i][0]);
	}
	cout << endl;
}
