#include <iostream>
#include <string>
using namespace std;

int my_stoi(string s) {
	int result = 0;
	for (int i = 0; i < s.length(); i++)
		result = result * 10 + (s[i] - '0');

	return result;
}

int main() {
	string sentence = "";
	string s;
	while (getline(cin, s)) sentence += s;

	int sum = 0, index = 0;
	while (1) {
		int comma = sentence.find(',', index);
		if (comma == -1) break;

		sum += my_stoi(sentence.substr(index, comma - index));
		index = comma + 1;
	}

	sum += my_stoi(sentence.substr(index, sentence.length() - index));
	cout << sum << endl;
}
