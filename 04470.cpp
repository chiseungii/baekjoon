#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	int N; cin >> N;
	getchar();

	for (int i = 0; i < N; i++) {
		string s; getline(cin, s);

		cout << i + 1 << ". " << s << endl;
	}
}
