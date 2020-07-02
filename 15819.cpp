#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, I; cin >> N >> I;

	vector<string> handle;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		handle.push_back(s);
	}
	sort(handle.begin(), handle.end());

	cout << handle[I - 1] << endl;
}
