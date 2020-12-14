#include <iostream>
#include <math.h>
using namespace std;

char prime[1000001];

string input;
int K;

void find_prime() {
	for (int i = 2; i <= K; i++)
		prime[i] = 1;

	int root = (int)sqrt(K) + 1;
	for (int i = 2; i <= root; i++)
		for (int j = i * 2; j <= K; j += i)
			prime[j] = 0;
}

int mod(string s, int n) {
	long long tmp = 0;
	for (int i = 0; i < s.length(); i++) {
		tmp = tmp * 10 + (s[i] - '0');
		tmp %= n;
	}

	return tmp;
}

int main() {
	string P; cin >> P >> K;

	find_prime(); bool good = true;
	for (int i = 2; i < K; i++) {
		if (prime[i]) {
			if (!mod(P, i)) {
				cout << "BAD " << i << endl;
				good = false;
				break;
			}
		}
	}

	if (good) cout << "GOOD\n";
}
