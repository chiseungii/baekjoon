#include <iostream>
#include <string>
using namespace std;

int main() {
	string input, key;
	getline(cin, input);
	cin >> key;

	int index_key = 0;
	string result = "";
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == ' ') result += ' ';
		else {
			char lock;
			if (input[i] > key[index_key]) {
				lock = input[i] - key[index_key];
				lock += 'a' - 1;
			}
			else if (input[i] == key[index_key])
				lock = 'z';
			else
				lock = 'z' - (key[index_key] - input[i]);
			result += lock;
		}

		index_key++;
		index_key %= key.length();
	}

	cout << result << endl;
}
