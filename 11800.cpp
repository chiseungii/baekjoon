#include <iostream>
#include <string>
using namespace std;

int main() {
	string ones[6] = { "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh" };
	string twice[6] = { "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh" };
	int T; cin >> T;

	for (int i = 0; i < T; i++) {
		int a, b; cin >> a >> b;
		if (b > a) {
			int tmp = a;
			a = b;
			b = tmp;
		}

		cout << "Case " << i + 1 << ": ";
		if (a == b) cout << twice[a - 1] << endl;
		else {
			if (a == 6 && b == 5) cout << "Sheesh Beesh\n";
			else cout << ones[a - 1] << ' ' << ones[b - 1] << endl;
		}
	}
}
