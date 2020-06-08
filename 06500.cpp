#include <iostream>
#include <vector>
using namespace std;

int main() {
	while (1) {
		int a; cin >> a;
		if (!a) break;
		int cnt = 1;

		vector<int> an;
		an.push_back(a);

		bool contain = false;
		while (1) {
			a *= a;
			a %= 1000000;
			a /= 100;

			for (int i = 0; i < an.size(); i++)
				if (an[i] == a) contain = true;

			if (contain) break;
			an.push_back(a); cnt++;
		}

		cout << cnt << endl;
	}
}
