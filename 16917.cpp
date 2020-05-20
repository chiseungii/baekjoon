#include <iostream>
using namespace std;

int main() {
	int A, B, C, X, Y;
	cin >> A >> B >> C >> X >> Y;

	// 한 마리씩 시킬 때
	int one = A * X + B * Y;

	// 반반 섞을 때
	int min = X < Y ? X : Y;
	int two = C * min * 2;
	two += (X - min) * A;
	two += (Y - min) * B;

	// 반반으로만 시킬 때
	int max = X < Y ? Y : X;
	int three = max * 2 * C;

	int result = one;
	if (two < result) result = two;
	if (three < result) result = three;
	cout << result << endl;
}
