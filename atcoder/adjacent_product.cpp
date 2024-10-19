#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
    for(int i = 0; i < n - 1; i++) {
        cout << v[i] * v[i + 1] << " ";
    }
}

int main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
