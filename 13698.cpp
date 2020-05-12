#include <iostream>
using namespace std;

#define EMPTY 0
#define SMALL 1
#define BIG 2

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int cup[4] = { SMALL, EMPTY, EMPTY, BIG };
	string s; cin >> s;

	for (int i = 0; i < s.length(); i++) {
		switch (s[i]) {
		case 'A':
			swap(cup[0], cup[1]);
			break;
		case 'B':
			swap(cup[0], cup[2]);
			break;
		case 'C':
			swap(cup[0], cup[3]);
			break;
		case 'D':
			swap(cup[1], cup[2]);
			break;
		case 'E':
			swap(cup[1], cup[3]);
			break;
		case 'F':
			swap(cup[2], cup[3]);
			break;
		}
	}

	int small, big;
	for (int i = 0; i < 4; i++) {
		if (cup[i] == SMALL) small = i + 1;
		if (cup[i] == BIG) big = i + 1;
	}

	cout << small << '\n' << big << '\n';
}
