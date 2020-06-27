#include <iostream>
using namespace std;

int main() {
	string fan = ":fan:";
	string hongjoon; cin >> hongjoon;
	hongjoon = ":" + hongjoon + ":";

	for (int i = 0; i < 3; i++)
		cout << fan;
	cout << endl;
	cout << fan << hongjoon << fan << endl;
	for (int i = 0; i < 3; i++)
		cout << fan;
	cout << endl;
}
