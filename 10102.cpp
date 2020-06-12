#include <iostream>
using namespace std;

int main() {
	int V; cin >> V;
	string s; cin >> s;

	int score = 0;
	for (int i = 0; i < V; i++) {
		if (s[i] == 'A') score--;
		else score++;
	}

	if (score == 0) cout << "Tie\n";
	else if (score < 0) cout << "A\n";
	else cout << "B\n";
}
