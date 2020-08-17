#include <iostream>
#include <string>
using namespace std;

string codes[12] = { "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#" };

string afterMove(string code, int m) {
	if (code == "Ab") code = "G#";
	else if (code == "Bb") code = "A#";
	else if (code == "B#") code = "C";
	else if (code == "Cb") code = "B";
	else if (code == "Db") code = "C#";
	else if (code == "Eb") code = "D#";
	else if (code == "E#") code = "F";
	else if (code == "Fb") code = "E";
	else if (code == "Gb") code = "F#";

	int index;
	for (int i = 0; i < 12; i++) {
		if (codes[i] == code) {
			index = i; break;
		}
	}

	index += m;
	if (index < 0) index += 12;
	else index %= 12;

	return codes[index];
}

int main() {
	while (1) {
		string music; getline(cin, music);
		if (music == "***") break;
		int move; cin >> move;
		getchar();

		int index = 0;
		for (int i = 0; i < music.length(); i++) {
			if (music[i] == ' ') {
				cout << afterMove(music.substr(index, i - index), move) << ' ';
				index = i + 1;
			}
		}
		cout << afterMove(music.substr(index), move) << endl;
	}
}
