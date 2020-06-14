#include <iostream>
#include <string>
using namespace std;

int main() {
	int N; cin >> N;
	getchar();

	for (int i = 0; i < N; i++) {
		string s; getline(cin, s);

		if (s.length() < 10) continue;
		else {
			if (s.substr(0, 10) != "Simon says")
				continue;
			else
				cout << s.substr(10) << endl;
		}
	}
}
