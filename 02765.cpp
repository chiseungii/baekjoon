#include <iostream>
using namespace std;

#define PI 3.1415927

int main() {
	double diameter, sec;
	int rotation, trip = 1;
	while (1) {
		cin >> diameter >> rotation >> sec;
		if (rotation == 0) break;

		double miles = diameter / 12. / 5280. * PI * rotation;
		double MPH = miles / sec * 3600.;

		cout << fixed;
		cout.precision(2);
		cout << "Trip #" << trip << ": " << miles << ' ' << MPH << endl;
		trip++;
	}
}
