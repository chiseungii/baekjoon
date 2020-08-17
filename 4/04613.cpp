#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		string s; getline(cin, s);
		if (s == "#") break;

		int quicksum = 0;
		for (int i = 0; i < s.length(); i++)
			if (isalpha(s[i]))
				quicksum += (i + 1) * (s[i] - 'A' + 1);

		cout << quicksum << endl;
	}
}
