// 꼬리를 무는 숫자 나열

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b; cin >> a >> b;

	int ax, ay, bx, by;
	if (!(a % 4)) {
		ax = 4;
		ay = a / 4 - 1;
	}
	else {
		ax = a % 4;
		ay = a / 4;
	}
	if (!(b % 4)) {
		bx = 4;
		by = b / 4 - 1;
	}
	else {
		bx = b % 4;
		by = b / 4;
	}

	cout << abs(ax - bx) + abs(ay - by) << endl;
}
