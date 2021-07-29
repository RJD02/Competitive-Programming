#include <iostream>
using namespace std;

#define endl "\n"

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a, b;
	int t;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}