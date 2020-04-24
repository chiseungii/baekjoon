#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int cup[3] = { 1,0,0 };
	string shuffle; cin >> shuffle;

	for (int i = 0; i < shuffle.length(); i++) {
		switch (shuffle[i]) {
		case 'A':
			swap(cup[0], cup[1]);
			break;
		case 'B':
			swap(cup[1], cup[2]);
			break;
		case 'C':
			swap(cup[0], cup[2]);
			break;
		}
	}

	for(int i=0;i<3;i++)
		if (cup[i]) {
			cout << i + 1 << endl;
			break;
		}
}
