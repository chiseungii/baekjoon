#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	string name; cin >> name;

	int score = 0;
	for (int i = 0; i < name.length(); i++)
		score += name[i] - 'A' + 1;

	cout << score << endl;
}
