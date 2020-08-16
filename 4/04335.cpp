#include <iostream>
#include <string>
using namespace std;

int main() {
	bool nums[11];

	while (1) {
		for (int i = 1; i <= 10; i++)
			nums[i] = true;

		bool lie = false;
		bool exit = false;
		while (1) {
			int n; cin >> n;
			getchar();

			if (!n) {
				exit = true;
				break;
			}

			string answer; getline(cin, answer);
			
			if (answer == "right on") {
				lie = !nums[n];
				break;
			}
			else if (answer == "too high") {
				for (int i = n; i <= 10; i++)
					nums[i] = false;
			}
			else {
				for (int i = 1; i <= n; i++)
					nums[i] = false;
			}
		}

		if (exit) break;

		if (lie) cout << "Stan is dishonest\n";
		else cout << "Stan may be honest\n";
	}
}
