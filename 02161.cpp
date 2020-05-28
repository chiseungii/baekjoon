#include <iostream>
#include <queue>
using namespace std;

int cards[1000];

int main() {
	int N; cin >> N;

	queue<int> card;
	for (int i = 1; i <= N; i++)
		card.push(i);

	int index = 0;
	while (card.size() > 1) {
		cards[index++] = card.front();
		card.pop();
		card.push(card.front());
		card.pop();
	}

	for (int i = 0; i < N - 1; i++)
		cout << cards[i] << ' ';
	cout << card.front() << endl;
}
