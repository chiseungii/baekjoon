#include <iostream>
#include <string>
using namespace std;

int main() {
	int T; cin >> T;
	getchar();

	for (int i = 0; i < T; i++) {
		string message; getline(cin, message);
		string secret; getline(cin, secret);

		for (int j = 0; j < message.length(); j++) {
			if (isalpha(message[j])) {
				message[j] = secret[message[j] - 'A'];
			}
		}

		cout << message << endl;
	}
}
