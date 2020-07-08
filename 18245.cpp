#include <iostream>
#include <string>
using namespace std;

int main() {
	int line = 2;
	while (1) {
		string s; getline(cin, s);

		if (s == "Was it a cat I saw?")
			break;

		for (int i = 0; i < s.length(); i += line)
			cout << s[i];
		cout << endl;

		line++;
	}
}
