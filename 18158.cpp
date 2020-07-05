#include <iostream>
#include "WAEP.h"
using namespace std;

void init(int T) {
}

int janken(int P) {
	if (P == 0) return 0;
	else if (P == 2) return 2;
	else return 5;
}
