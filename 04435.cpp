#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int gandalf[6] = { 1, 2, 3, 3, 4, 10 };
	int sauron[7] = { 1, 2, 2, 2, 3, 5, 10 };
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int G = 0;
		for (int j = 0; j < 6; j++) {
			int g; cin >> g;
			G += g * gandalf[j];
		}

		int S = 0;
		for (int j = 0; j < 7; j++) {
			int s; cin >> s;
			S += s * sauron[j];
		}

		if (G == S)
			printf("Battle %d: No victor on this battle field\n", i + 1);
		else if (G > S)
			printf("Battle %d: Good triumphs over Evil\n", i + 1);
		else
			printf("Battle %d: Evil eradicates all trace of Good\n", i + 1);
	}
}
