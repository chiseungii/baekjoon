#include <iostream>
using namespace std;

int seat[1000][1000];

int main() {
	int N, a, b; cin >> N >> a >> b;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> seat[i][j];

	bool angry = false;
	int jinseo = seat[a - 1][b - 1];
	for (int i = 0; i < N; i++) {
		if (seat[a - 1][i] > jinseo)
			angry = true;
		if (seat[i][b - 1] > jinseo)
			angry = true;
	}

	if (angry) cout << "ANGRY\n";
	else cout << "HAPPY\n";
}
