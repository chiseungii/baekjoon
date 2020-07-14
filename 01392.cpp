#include <iostream>
using namespace std;

// int music[100];
int sec[10002];

int main() {
	int N, Q; cin >> N >> Q;

	int index = 0;
	for (int i = 0; i < N; i++) {
		int Bi; cin >> Bi;

		for (int j = 0; j < Bi; j++)
			sec[index++] = i + 1;
	}

	for (int i = 0; i < Q; i++) {
		int Ti; cin >> Ti;
		cout << sec[Ti] << endl;
	}
}
