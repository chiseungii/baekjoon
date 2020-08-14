#include <iostream>
using namespace std;

int main() {
	string code; cin >> code;

	int index = 0, NOP = 0;
	for (int i = 0; i < code.length(); i++) {
		if (islower(code[i])) index++;
		else {
			if (index % 4 == 0) index++;
			else {
				while (index % 4) { index++; NOP++; }
				index++;
			}
		}
	}

	cout << NOP << endl;
}
