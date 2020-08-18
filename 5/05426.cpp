#include <iostream>
#include <cmath>
using namespace std;

char letter[100][100];

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		string s; cin >> s;
		int len = s.length();
		int size = sqrt(len);

		int index = 0;
		for (int j = 0; j < size; j++)
			for (int k = 0; k < size; k++)
				letter[j][k] = s[index++];

		for (int j = size - 1; j >= 0; j--)
			for (int k = 0; k < size; k++)
				cout << letter[k][j];
		cout << endl;
	}
}
