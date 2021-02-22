/*
Divide and Conquer
*/

#include <iostream>
using namespace std;

int paper[2187][2187];

int cnt[3];	// -1, 0, 1

bool isFull(int start_i, int start_j, int size) {
	int first = paper[start_i][start_j];

	for (int i = start_i; i < start_i + size; i++)
		for (int j = start_j; j < start_j + size; j++)
			if (paper[i][j] != first) return false;

	return true;
}

void DNC(int start_i, int start_j, int size) {
	if (size == 1 || isFull(start_i, start_j, size)) {
		cnt[paper[start_i][start_j] + 1]++;
		return;
	}

	int afterSize = size / 3;	// 쪼갠 크기

	// 윗줄
	DNC(start_i, start_j, afterSize);
	DNC(start_i, start_j + afterSize, afterSize);
	DNC(start_i, start_j + afterSize * 2, afterSize);

	// 가운데줄
	DNC(start_i + afterSize, start_j, afterSize);
	DNC(start_i + afterSize, start_j + afterSize, afterSize);
	DNC(start_i + afterSize, start_j + afterSize * 2, afterSize);

	// 아랫줄
	DNC(start_i + afterSize * 2, start_j, afterSize);
	DNC(start_i + afterSize * 2, start_j + afterSize, afterSize);
	DNC(start_i + afterSize * 2, start_j + afterSize * 2, afterSize);
}

int main() {
	int N; cin >> N;	// N x N

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> paper[i][j];

	DNC(0, 0, N);

	for (int i = 0; i < 3; i++)
		cout << cnt[i] << endl;
}
