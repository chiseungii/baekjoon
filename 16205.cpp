#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	string var; cin >> var;

	vector<string> words;
	if (n == 2) {
		int index = 0;
		for (int i = 1; i < var.length(); i++) {
			if (var[i] == '_') {
				words.push_back(var.substr(index, i - index));
				index = i + 1;
			}
		}
		words.push_back(var.substr(index));
	}
	else {
		int index = 0;
		for (int i = 1; i < var.length(); i++) {
			if (isupper(var[i])) {
				words.push_back(var.substr(index, i - index));
				index = i;
			}
		}
		words.push_back(var.substr(index));
	}

	// print camel
	words[0][0] = tolower(words[0][0]);
	cout << words[0];
	for (int i = 1; i < words.size(); i++) {
		words[i][0] = toupper(words[i][0]);
		cout << words[i];
	}
	cout << endl;

	// print snake
	cout << words[0];
	for (int i = 1; i < words.size(); i++) {
		cout << '_';
		words[i][0] = tolower(words[i][0]);
		cout << words[i];
	}
	cout << endl;

	// print pascal
	words[0][0] = toupper(words[0][0]);
	cout << words[0];
	for (int i = 1; i < words.size(); i++) {
		words[i][0] = toupper(words[i][0]);
		cout << words[i];
	}
	cout << endl;
}
