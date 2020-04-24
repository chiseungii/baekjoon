#include <iostream>
using namespace std;

int main() {
	string s1, s2; char ops;
	cin >> s1 >> ops >> s2;

	string result = "";
	if (ops == '*') {
		result = s1;
		for (int j = 0; j < s2.length() - 1; j++)
			result += "0";
	}
	else {
		if (s1 == s2) {
			result = s1;
			result[0] = '2';
		}
		else if (s1.length() > s2.length()) {
			result = s1;
			result[s1.length() - s2.length()] = '1';
		}
		else {
			result = s2;
			result[s2.length() - s1.length()] = '1';
		}
	}

	cout << result << endl;
}
