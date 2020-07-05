#include <iostream>
#include <string>
using namespace std;

int main() {
	string S; getline(cin, S);

	int left, right, shift, space;
	left = right = shift = space = 0;
	for (int i = 0; i < S.length(); i++) {
		if (S[i] == ' ') space++;
		else {
			if (isupper(S[i])) shift++;
			if (S[i] == 'U' || S[i] == 'u' || S[i] == 'I' || S[i] == 'i'
				|| S[i] == 'O' || S[i] == 'o' || S[i] == 'P' || S[i] == 'p'
				|| S[i] == 'H' || S[i] == 'h' || S[i] == 'J' || S[i] == 'j'
				|| S[i] == 'K' || S[i] == 'k' || S[i] == 'L' || S[i] == 'l'
				|| S[i] == 'N' || S[i] == 'n' || S[i] == 'M' || S[i] == 'm')
				right++;
			else left++;
		}
	}

	for (int i = 0; i < shift; i++) {
		if (left <= right) left++;
		else right++;
	}
	for (int i = 0; i < space; i++) {
		if (left <= right) left++;
		else right++;
	}

	cout << left << ' ' << right << endl;
}
