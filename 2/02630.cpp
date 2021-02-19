/*
분할정복 (Divide and Conquer)
*/

#include <iostream>
using namespace std;

char board[128][128];	// 색종이 판
int N;					// 한 변의 길이

int white = 0;			// 흰색 종이 개수
int blue = 0;			// 파란 종이 개수

bool isFull(int start_i, int start_j, int size) {
	char first = board[start_i][start_j];

	for (int i = start_i; i < start_i + size; i++)
		for (int j = start_j; j < start_j + size; j++)
			if (board[i][j] != first) return false;

	first == '0' ? white++ : blue++;
	return true;
}

void DNC(int start_i, int start_j, int size) {
	if (isFull(start_i, start_j, size)) return;

	DNC(start_i, start_j, size / 2);	// 왼쪽 위
	DNC(start_i, start_j + size / 2, size / 2);	// 오른쪽 위
	DNC(start_i + size / 2, start_j, size / 2);	// 왼쪽 아래
	DNC(start_i + size / 2, start_j + size / 2, size / 2);	// 오른쪽 아래
}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> board[i][j];

	DNC(0, 0, N);

	cout << white << endl;
	cout << blue << endl;
}
