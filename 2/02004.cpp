#include <iostream>
#include <algorithm>
using namespace std;

pair<long long, long long> two_five(long long n) {
	long long two = 0, five = 0;

	for (long long i = 2; i <= n; i *= 2)
		two += n / i;
	for (long long i = 5; i <= n; i *= 5)
		five += n / i;

	return { two, five };
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long n, m; cin >> n >> m;

	pair<long long, long long> up = two_five(n);
	pair<long long, long long> down_1 = two_five(n - m);
	pair<long long, long long> down_2 = two_five(m);

	cout << min(up.first - down_1.first - down_2.first, up.second - down_1.second - down_2.second) << '\n';
}
