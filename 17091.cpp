#include <iostream>
using namespace std;

int main() {
	string hour[13] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "one" };
	string min[29] = {
		"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
		"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
		"twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"
	};

	int h, m; cin >> h >> m;

	if (m == 0) cout << hour[h - 1] << " o' clock\n";
	else if (m == 30) cout << "half past " << hour[h - 1] << endl;
	else if (m == 15) cout << "quarter past " << hour[h - 1] << endl;
	else if (m == 45) cout << "quarter to " << hour[h] << endl;
	else if (m == 1) cout << "one minute past " << hour[h - 1] << endl;
	else if (m == 59) cout << "one minute to " << hour[h] << endl;
	else if (m < 30) cout << min[m - 1] << " minutes past " << hour[h - 1] << endl;
	else cout << min[59 - m] << " minutes to " << hour[h] << endl;
}
