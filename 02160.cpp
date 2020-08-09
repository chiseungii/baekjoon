#include <iostream>
using namespace std;

int different(char pic1[35], char pic2[35]) {
	int cnt = 0;
	for (int i = 0; i < 35; i++)
		if (pic1[i] != pic2[i])
			cnt++;

	return cnt;
}

char pics[50][35];

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int index = 0;
		for (int j = 0; j < 5; j++)
			for (int k = 0; k < 7; k++)
				cin >> pics[i][index++];
	}

	int p1 = 0, p2 = 0, min = 36;
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			int dif = different(pics[i], pics[j]);
			if (dif < min) {
				p1 = i; p2 = j;
				min = dif;
			}
		}
	}

	cout << p1 + 1 << ' ' << p2 + 1 << endl;
}
