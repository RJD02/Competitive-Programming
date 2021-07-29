#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve() {
	int x, n;
	int max = -INT_MAX;
	cin >> n >> x;
	for(int i = 1; i <= x; i++) {
		int val = n - i * floor(n / i);
		if(max < val) {
			max = val;
		}
	}
	cout << max << endl;
}

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// #endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while(T--) {
		solve();
	}
	return 0;
}