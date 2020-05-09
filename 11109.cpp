#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int d, n, s, p; cin >> d >> n >> s >> p;

		int par = n * p + d;
		int nopar = n * s;
		if (par == nopar) cout << "does not matter\n";
		else if (par < nopar) cout << "parallelize\n";
		else cout << "do not parallelize\n";
	}
}
