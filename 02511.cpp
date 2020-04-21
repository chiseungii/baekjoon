#include <iostream>
using namespace std;

#define A 'A'
#define B 'B'
#define D 'D'

int main() {
	int A_cards[10], B_cards[10];
	for (int i = 0; i < 10; i++)
		cin >> A_cards[i];
	for (int i = 0; i < 10; i++)
		cin >> B_cards[i];

	char last_winner = D;
	int A_score = 0, B_score = 0;
	for (int i = 0; i < 10; i++) {
		if (A_cards[i] > B_cards[i]) {
			A_score += 3;
			last_winner = A;
		}
		else if (A_cards[i] < B_cards[i]) {
			B_score += 3;
			last_winner = B;
		}
		else {
			A_score++; B_score++;
		}
	}

	cout << A_score << " " << B_score << endl;
	if (A_score > B_score) cout << "A\n";
	else if (B_score > A_score) cout << "B\n";
	else cout << last_winner << endl;
}
