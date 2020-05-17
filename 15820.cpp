#include <iostream>
using namespace std;

#define CORRECT 0
#define WRONG_SAMPLE 1
#define WRONG_SYSTEM 2

int main() {
	int S1, S2; cin >> S1 >> S2;

	int result = CORRECT;
	for (int i = 0; i < S1; i++) {
		long long a, b; cin >> a >> b;
		if (a != b) result = WRONG_SAMPLE;
	}

	if (!result) {
		for (int i = 0; i < S2; i++) {
			long long a, b; cin >> a >> b;
			if (a != b) result = WRONG_SYSTEM;
		}
	}

	if (result == CORRECT)
		cout << "Accepted\n";
	else if (result == WRONG_SAMPLE)
		cout << "Wrong Answer\n";
	else
		cout << "Why Wrong!!!\n";
}
