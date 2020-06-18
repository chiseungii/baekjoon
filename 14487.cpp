#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;

	vector<int> distances;
	for (int i = 0; i < n; i++) {
		int v; cin >> v;
		distances.push_back(v);
	}
	sort(distances.begin(), distances.end());

	int sum = 0;
	for (int i = 0; i < distances.size() - 1; i++)
		sum += distances[i];

	cout << sum << endl;
}
