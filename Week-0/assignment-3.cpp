#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve() {
	long long int c, d, l;
	cin >> c >> d >> l;
	if (l >= (d + c) * 4 - 4 * d) {
		cout << "yes";
	} else {
		cout << "no";
	}
	cout << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}