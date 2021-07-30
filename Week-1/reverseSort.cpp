#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define pb push_back
#define pf pop_back
using namespace std;

void solve() {
	int n;
	cin >> n;
	vi v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int cost = 0;
	for(int i = 0; i < n - 1; i++) {
		int j = *min_element(v.begin() + i, v.end());
		auto m = find(v.begin() + i, v.end(), j);
		reverse(v.begin() + i, m + 1);
		cost += distance(v.begin(), m) - i + 1;
	}
	cout << cost << endl;
}

int main()
{
// #ifndef ONLINE_JUDGE
// // For getting input from input.txt
// freopen("input.txt", "r", stdin);
// // For writing output to output.txt
// freopen("expectedoutput.txt", "w", stdout);
// #endif //ONLINE_JUDGE
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	//Try till the end!!
	//Don't give up
	//Goal: A, B, C
	for(int c = 0; c < T; c++) {
		cout << "Case #" << c + 1 << ": ";
		solve();
	}
	return 0;
}
