#include <iostream>
#include <string>
using namespace std;

int main() {
	char colon;
	int prsH, prsM, prsS, thrH, thrM, thrS;
	cin >> prsH >> colon >> prsM >> colon >> prsS;
	cin >> thrH >> colon >> thrM >> colon >> thrS;

	int resH, resM, resS;
	if (prsH == thrH && prsM == thrM && prsS == thrS) {
		resH = 24; resM = 0; resS = 0;
	}
	else {
		// 초 계산
		if (thrS >= prsS)
			resS = thrS - prsS;
		else {
			thrM--; thrS += 60;
			resS = thrS - prsS;
		}

		if (thrM < 0) {
			thrH--; thrM += 60;
		}
		if (thrH < 0) thrH += 24;

		// 분 계산
		if (thrM >= prsM)
			resM = thrM - prsM;
		else {
			thrH--; thrM += 60;
			resM = thrM - prsM;
		}

		if (thrH < 0) thrH += 24;

		// 시 계산
		if (thrH >= prsH)
			resH = thrH - prsH;
		else {
			thrH += 24;
			resH = thrH - prsH;
		}
	}

	cout.width(2);
	cout.fill('0');
	cout << resH << ':';
	cout.width(2);
	cout.fill('0');
	cout << resM << ':';
	cout.width(2);
	cout.fill('0');
	cout << resS << endl;
}
