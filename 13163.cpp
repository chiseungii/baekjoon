#include <iostream>
#include <string>
using namespace std;

int main() {
	int N; cin >> N;
	getchar();

	for (int i = 0; i < N; i++) {
		string s; getline(cin, s);
		string result = "god";

		int index = 0;
		while (s[index] != ' ') index++;
		index++;

		int start_index = index;
		for (; index < s.length(); index++) {
			if (s[index] == ' ') {
				result += s.substr(start_index, index - start_index);
				start_index = index + 1;
			}
		}
		result += s.substr(start_index);

		cout << result << endl;
	}
}
