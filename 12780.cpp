#include <iostream>
#include <string>
using namespace std;

int main() {
	string H, N; cin >> H >> N;

	int cnt = 0;
	for (int i = 0; i <= H.length() - N.length(); i++)
		if (H.substr(i, N.length()) == N) cnt++;

	cout << cnt << endl;
}
