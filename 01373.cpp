#include <iostream>
using namespace std;

string Two2Eight(string s) {
	if (s == "0" || s == "00" || s == "000")
		return "0";
	else if (s == "1" || s == "01" || s == "001")
		return "1";
	else if (s == "10" || s == "010")
		return "2";
	else if (s == "11" || s == "011")
		return "3";
	else if (s == "100")
		return "4";
	else if (s == "101")
		return "5";
	else if (s == "110")
		return "6";
	else if (s == "111")
		return "7";
	else
		return "";
}

int main() {
	string two; cin >> two;

	int index = two.length() % 3;
	string sub = two.substr(0, index);
	string result = Two2Eight(sub);
	for (; index < two.length(); index += 3) {
		sub = two.substr(index, 3);
		result += Two2Eight(sub);
	}

	cout << result << endl;
}
