#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		string letter; getline(cin, letter);
		if (letter == "*") break;

		bool isTautogram = true;
		char alpha = toupper(letter[0]);
		for (int i = 1; i < letter.length(); i++)
			if (letter[i] == ' ')
				if (toupper(letter[i + 1]) != alpha)
					isTautogram = false;

		if (isTautogram) cout << "Y\n";
		else cout << "N\n";
	}
}
