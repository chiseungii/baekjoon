#include <iostream>
using namespace std;

int main() {
	while (1) {
		string bit; cin >> bit;
		if (bit == "#") break;

		int cnt = 0;
		for (int i = 0; i < bit.length(); i++)
			if (bit[i] == '1') cnt++;

		int index = bit.length() - 1;
		if (bit[index] == 'e') {
			if (cnt % 2) bit[index] = '1';
			else bit[index] = '0';
		}
		else {
			if (cnt % 2) bit[index] = '0';
			else bit[index] = '1';
		}

		cout << bit << endl;
	}
}
