#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string s; cin >> s;

	int arrow, time;
	arrow = time = 0;
	for (int i = 0; i < s.length(); i++) {
		int dis = abs(s[i] - 'A' - arrow);

		if (dis > 13) time += 26 - dis;
		else time += dis;

		arrow = s[i] - 'A';
	}

	cout << time << endl;
}
