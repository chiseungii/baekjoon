#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int* part;

int main() {
	int W, P; cin >> W >> P;

	part = new int[P + 2];
	part[0] = 0;
	part[P + 1] = W;
	for (int i = 1; i <= P; i++)
		cin >> part[i];

	vector<int> weight;
	for (int i = 0; i < P + 1; i++)
		for (int j = i + 1; j < P + 2; j++)
			weight.push_back(part[j] - part[i]);

	sort(weight.begin(), weight.end());
	weight.erase(unique(weight.begin(), weight.end()), weight.end());

	for (int i = 0; i < weight.size(); i++)
		cout << weight[i] << ' ';
	cout << endl;
}
