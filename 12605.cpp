#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N; cin >> N;
	getchar();

	for (int i = 0; i < N; i++) {
		string s; getline(cin, s);

		int index = 0;
		vector<string> words;
		while (1) {
			int space = s.find(' ', index);
			if (space == -1) break;

			words.push_back(s.substr(index, space - index));
			index = space + 1;
		}
		words.push_back(s.substr(index));

		printf("Case #%d: ", i + 1);
		for (int i = words.size() - 1; i >= 0; i--)
			cout << words[i] << ' ';
		cout << endl;
	}
}
