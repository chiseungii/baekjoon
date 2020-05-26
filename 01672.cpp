#include <iostream>
using namespace std;

char DNA[20][20];

/*
char lastDNA(char a, char b) {
	if (a == 'A') a = 0;
	else if (a == 'G') a = 1;
	else if (a == 'C') a = 2;
	else a = 3;

	if (b == 'A') b = 0;
	else if (b == 'G') b = 1;
	else if (b == 'C') b = 2;
	else b = 3;

	return DNA[a][b];
}
*/

int main() {
	int N; cin >> N;
	string s; cin >> s;

	DNA[0][0] = DNA[0][2] = DNA[6][19] = DNA[2][0] = DNA[19][6] = 'A';
	DNA[0][19] = DNA[6][6] = DNA[2][19] = DNA[19][0] = DNA[19][2] = 'G';
	DNA[0][6] = DNA[6][0] = DNA[2][2] = 'C';
	DNA[6][2] = DNA[2][6] = DNA[19][19] = 'T';

	if (s.length() == 1) cout << s << endl;
	else {
		char a = s[s.length() - 2];
		char b = s[s.length() - 1];
		b = DNA[a - 'A'][b - 'A'];

		for (int i = s.length() - 3; i >= 0; i--) {
			a = s[i];
			b = DNA[a - 'A'][b - 'A'];
		}

		cout << b << endl;
		/*
		int len = s.length();
		char a, b; string result = "";
		while (len > 1) {
			a = s[len - 2];
			b = s[len - 1];

			
			if (a == 'A') a = 0;
			else if (a == 'G') a = 1;
			else if (a == 'C') a = 2;
			else a = 3;

			if (b == 'A') b = 0;
			else if (b == 'G') b = 1;
			else if (b == 'C') b = 2;
			else b = 3;
			

			s = s.substr(0, len - 2) + DNA[a - 'A'][b - 'A'];
			len = s.length();
		}

		cout << s << endl;
		*/
	}
}
