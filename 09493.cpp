#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	double M, A, B;
	while (1) {
		cin >> M >> A >> B;
		if (!M && !A && !B) break;

		double time = M / A - M / B;
		int hour = (int)time;
		time = (time - hour) * 60;
		int min = (int)time;
		time = (time - min) * 60 + 0.5;
		int sec = (int)time;

		printf("%d:%02d:%02d\n", hour, min, sec);
	}
}
