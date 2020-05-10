#include <iostream>
using namespace std;

int main() {
	int A_damage, A_life;
	cin >> A_damage >> A_life;
	int B_damage, B_life;
	cin >> B_damage >> B_life;

	while (A_life > 0 && B_life > 0) {
		A_life -= B_damage;
		B_life -= A_damage;
	}

	if (A_life <= 0 && B_life <= 0)
		cout << "DRAW\n";
	else if (A_life <= 0)
		cout << "PLAYER B\n";
	else
		cout << "PLAYER A\n";
}
