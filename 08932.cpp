#include <iostream>
#include <cmath>
using namespace std;

#define TRACK 0
#define FIELD 1

int main() {
	int t; cin >> t;

	bool seven[7] = { TRACK,FIELD,FIELD,TRACK,FIELD,FIELD,TRACK };
	double A[7] = { 9.23076,1.84523,56.0211,4.99087,0.188807,15.9803,0.11193 };
	double B[7] = { 26.7,75,1.5,42.5,210,3.8,254 };
	double C[7] = { 1.835,1.348,1.05,1.81,1.41,1.04,1.88 };
	int P[7];
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 7; j++)
			cin >> P[j];

		int score = 0;
		for (int j = 0; j < 7; j++) {
			if (seven[j] == TRACK)
				score += (A[j] * pow(B[j] - P[j], C[j]));
			else
				score += (A[j] * pow(P[j] - B[j], C[j]));
		}

		cout << score << endl;
	}
}
