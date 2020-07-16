#include <iostream>
using namespace std;

char alpha[200][20];

int main() {
	int K; cin >> K;
	string s; cin >> s;

	int index = 0;
	for (int i = 0; i < s.length() / K; i += 2) {
		for (int j = 0; j < K; j++)
			alpha[i][j] = s[index++];
		for (int j = K - 1; j >= 0; j--)
			alpha[i + 1][j] = s[index++];
	}

	for (int i = 0; i < K; i++)
		for (int j = 0; j < s.length() / K; j++)
			cout << alpha[j][i];
	cout << endl;
}
