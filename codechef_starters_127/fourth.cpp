#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;



#define ll unsigned long long

// what's the largest container in c++?
// 2^64 - 1
// can above number be stored in unsigned long long?
// yes

bool verify(vector<ll> &ans, ll l) {
    for(int i = 0; i < ans.size(); i++) {
		for(int j = 0; j < ans.size(); j++) {
			if(i == j) continue;
			if(ans[i] + ans[j] > l and ans[i] + l > ans[j] and ans[j] + l > ans[i]) {
				cout << "Invalid: " << ans[i] << " " << ans[j] << endl;
				return false;
			}
		}
	}
	return true;
}

void solve() {
	ll n, l;
	cin >> n >> l;
	vector<ll> ans(n, 0);
	for(int i = 0; i < n; i++) {
	    if(i == 0) {
	        ans[i] = l + 1;
	    } else {
	        ans[i] = (i + 1) * ans[i - 1] + 2;
	    }
	}
	cout << l << " " << n << endl;
	for(int i = 0; i < n; i++) {
	    cout << ans[i] << " ";
	}
    
	cout << endl;
	// return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
	// write code to generate random numbers
		// ll n = 1 + rand() % 1000;
		// ll l = 1 + rand() % 1000;
        // vector<ll> ans = solve(n, l);
		solve();
		// if(!verify(ans, l)) break;
    }
    return 0;
}
