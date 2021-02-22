/*
Divide and Conquer
*/

#include <iostream>
using namespace std;

char video[64][64];

string result = "";	// 결과 저장

bool isFull(int start_i, int start_j, int size) {
	char first = video[start_i][start_j];

	for (int i = start_i; i < start_i + size; i++)
		for (int j = start_j; j < start_j + size; j++)
			if (video[i][j] != first) return false;

	return true;
}

void DNC(int start_i, int start_j, int size) {
	if (size == 1 || isFull(start_i, start_j, size)) {
		result += video[start_i][start_j];
		return;
	}

	int afterSize = size / 2;	// 쪼갠 크기
	result += "(";				// 괄호 추가

	DNC(start_i, start_j, afterSize);	// 왼쪽 위
	DNC(start_i, start_j + afterSize, afterSize);	// 오른쪽 위
	DNC(start_i + afterSize, start_j, afterSize);	// 왼쪽 아래
	DNC(start_i + afterSize, start_j + afterSize, afterSize);	// 오른쪽 아래

	result += ")";				// 괄호 닫기
}

int main() {
	int N; cin >> N;	// N x N

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> video[i][j];

	DNC(0, 0, N);

	cout << result << endl;
}
