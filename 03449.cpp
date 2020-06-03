#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		string s1, s2;
		cin >> s1 >> s2;

		int X = 0;
		for (int i = 0; i < s1.length(); i++)
			if (s1[i] != s2[i])
				X++;

		printf("Hamming distance is %d.\n", X);
	}
}
