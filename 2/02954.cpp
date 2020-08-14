#include <iostream>
#include <string>
using namespace std;

int main() {
	string sentence;
	getline(cin, sentence);

	string result = "";
	for (int i = 0; i < sentence.length(); i++) {
		if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i'
			|| sentence[i] == 'o' || sentence[i] == 'u') {
			result += sentence[i];
			i += 2;
		}
		else result += sentence[i];
	}

	cout << result << endl;
}
