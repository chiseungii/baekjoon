#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int nodes[10000];

void preToPost(int* nodes, int start, int end) {
	if (start == end) {
		cout << nodes[start] << '\n';
		return;
	}

	int root = start;
	int left_start, left_end;
	int right_start, right_end;

	bool no_left, no_right;
	no_left = no_right = false;
	
	// left 없을 경우
	if (nodes[start + 1] > nodes[start]) {
		no_left = true;
		right_start = start + 1;
		right_end = end;
	}
	// left 범위 지정
	else {
		left_start = start + 1;
		for (left_end = left_start + 1; left_end <= end && nodes[left_end] < nodes[start]; left_end++);
		left_end--;

		// right 없을 경우
		if (left_end == end)
			no_right = true;
		// right 범위 지정
		else {
			right_start = left_end + 1;
			right_end = end;
		}
	}

	if (!no_left) preToPost(nodes, left_start, left_end);
	if (!no_right) preToPost(nodes, right_start, right_end);
	cout << nodes[start] << '\n';

	return;
}

int main() {
	int a, index = 0;
	for (; scanf("%d", &a) != -1; index++)
		nodes[index] = a;

	preToPost(nodes, 0, index - 1);
}
